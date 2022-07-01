#include<stdio.h>
#define SZ 1005
#define QueSize 1000050
int Xsize, Ysize;

struct node {
    int x;
    int y;
};

struct node queue[QueSize];
int front = 0;
int rear = 0;
int cnt = 0;

int vectX[4] = { 0, 0, 1, -1 };
int vectY[4] = { 1, -1, 0, 0 };

int map[SZ][SZ];

struct node deque() {
    struct node temp = queue[front];
    front = (front + 1) % QueSize;
    return temp;
}

void enque(int x_, int y_) {
    struct node temp;
    temp.x = x_;
    temp.y = y_;
    queue[rear] = temp;
    rear = (rear + 1) % QueSize;
}

int isQueEmpty() {
    return((rear == front) ? 1 : 0);
}

int bfs() {
    int x, y;
    int nextX; int nextY;
    while (isQueEmpty() == 0) {
        struct node temp = deque();
        x = temp.x; y = temp.y;
        for (int i = 0; i < 4; i++) {
            nextX = x + vectX[i];
            nextY = y + vectY[i];

            if (nextX >= 0 && nextY >= 0 && nextX < Xsize && nextY < Ysize) {
                //이번에 익은 토마토 -> queue 에 넣는다.
                if (map[nextX][nextY] == 0) {
                    map[nextX][nextY] = map[x][y] + 1;
                    enque(nextX, nextY);
                    cnt--;
                }
            }
        }
    }

    // queue가 다 비워지고 모든 토마토가 다 익은 경우
    if (cnt == 0) {
        return (map[x][y] - 1);
    }

    // queue가 다 비워졌지만 아직도 다 안익은 경우
    return -1;
}

int main() {
    scanf("%d %d", &Ysize, &Xsize);
    for (int i = 0; i < Xsize; i++) {
        for (int j = 0; j < Ysize; j++) {
            scanf("%d", &map[i][j]);
            if (map[i][j] == 0) {
                cnt++;
            }
            else if (map[i][j] == 1) {
                enque(i, j);
            }
        }
    }

    printf("%d", bfs());

}