#include<stdio.h>
#define SZ 101
#define QueSize 1030301
int Xsize, Ysize, Zsize;

struct node {
    int x;
    int y;
    int z;
};

struct node queue[QueSize];
int front = 0;
int rear = 0;
int cnt = 0;

int vectX[6] = { 0, 0, 0, 0, 1, -1 };
int vectY[6] = { 0, 0, 1, -1, 0, 0 };
int vectZ[6] = { 1, -1, 0, 0, 0, 0 };

int map[SZ][SZ][SZ];

struct node deque() {
    struct node temp = queue[front];
    front = (front + 1) % QueSize;
    return temp;
}

void enque(int x_, int y_, int z_) {
    struct node temp;
    temp.x = x_;
    temp.y = y_;
    temp.z = z_;
    queue[rear] = temp;
    rear = (rear + 1) % QueSize;
}

int isQueEmpty() {
    return((rear == front) ? 1 : 0);
}

int bfs() {
    int x, y, z;
    int nextX; int nextY; int nextZ;
    while (isQueEmpty() == 0) {
        struct node temp = deque();
        x = temp.x; y = temp.y; z = temp.z;
        for (int i = 0; i < 6; i++) {
            nextX = x + vectX[i];
            nextY = y + vectY[i];
            nextZ = z + vectZ[i];
            if (nextX >= 0 && nextY >= 0 && nextX < Xsize && nextY < Ysize && nextZ >= 0 && nextZ < Zsize) {
                if (map[nextX][nextY][nextZ] == 0) {
                    map[nextX][nextY][nextZ] = map[x][y][z] + 1;
                    enque(nextX, nextY, nextZ);
                    cnt--;
                }
            }
        }
    }
    if (cnt == 0) {
        return (map[x][y][z] - 1);
    }
    return -1;
}

int main() {
    scanf("%d %d %d", &Zsize, &Ysize, &Xsize);
    for (int i = 0; i < Xsize; i++) {
        for (int j = 0; j < Ysize; j++) {
            for (int k = 0; k < Zsize; k++) {
                scanf("%d", &map[i][j][k]);
                if (map[i][j][k] == 0) {
                    cnt++;
                }
                else if (map[i][j][k] == 1) {
                    enque(i, j, k);
                }
            }
        }
    }

    printf("%d", bfs());

}