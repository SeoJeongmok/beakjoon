#include <stdio.h>
#define SZ 1001
int D_visit[SZ] = { 0 };
int B_visit[SZ] = { 0 };
int map[SZ][SZ] = { 0 };
int queue[SZ] = {0};
int n, m, v;
void dfs(int v) {
    int w;
    D_visit[v] = 1;
    printf("%d ", v);
    for (w = 1; w <= n; w++) {
        if (map[v][w] == 1 && D_visit[w] == 0) {
            dfs(w);
        }
    }
}
void bfs(int v) {
    int w;
    int front, rear, pop;
    front = rear = 0;
    printf("%d ", v);
    B_visit[v] = 1;
    queue[0] = v; rear++;
    while (front < rear) {
        pop = queue[front]; front++;
        for (w = 1; w <= n; w++) {
            if (map[pop][w] == 1 && B_visit[w] == 0) {
                printf("%d ", w);
                queue[rear] = w; rear++;
                B_visit[w] = 1;
            }
        }
    }
}
int main() {
    int x, y;
    scanf("%d %d %d", &n, &m, &v);

    for (int i = 0; i < m; i++) {
        scanf("%d %d", &x, &y);
        map[x][y] = 1;
        map[y][x] = 1;
    }

    dfs(v);
    printf("\n");
    bfs(v);

    return 0;
}