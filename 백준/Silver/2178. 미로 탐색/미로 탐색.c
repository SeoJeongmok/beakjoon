#include<stdio.h>
#define SZ 101
#define QueSize 10201
int Xsize, Ysize;
struct node {
	int x;
	int y;
};
struct node queue[QueSize];
int front = 0;
int rear = 0;
char map[SZ][SZ];
int visit[SZ][SZ] = {0};
int dx[4] = { 0,0,1,-1 };
int dy[4] = { 1,-1,0,0 };

struct node deque() {
	struct node temp = queue[front];
	front = (front + 1) % QueSize;
	return temp;
}
void enque(int X, int Y) {
	struct node temp;
	temp.x = X;
	temp.y = Y;
	queue[rear] = temp;
	rear = (rear + 1) % QueSize;
}

int isQueEmpty() {
	return ((rear == front) ? 1 : 0);
}
int solution() {
	int nextX, nextY;
	visit[0][0] = 1;
	enque(0, 0);
	while (isQueEmpty() == 0) {
		struct node temp = deque();
		for (int i = 0; i < 4; i++) {
			nextX = temp.x + dx[i];
			nextY = temp.y + dy[i];
			if (nextX<0 || nextX>Xsize - 1 || nextY<0 || nextY>Ysize - 1) {
				continue;
			}
			if (map[nextX][nextY] == '1' && visit[nextX][nextY] == 0) {
				visit[nextX][nextY] = visit[temp.x][temp.y] + 1;
				enque(nextX, nextY);
			}
			if (nextX == Xsize - 1 && nextY == Ysize - 1) {
				return visit[nextX][nextY];
			}
		}
	}
}
int main() {
	scanf("%d", &Xsize);
	scanf("%d", &Ysize);
	for (int i = 0; i < Xsize; i++) {
		scanf("%s", map[i]);
	}
	printf("%d\n",solution());
}
