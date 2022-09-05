#include<iostream>
#include<stack>

using namespace std;

int N,a;
int graph[102][102] = { 0 };
int visit[102][102] = { 0 };
int answer[102][102] = { 0 };
stack<int>st;

void f(int goal) {
	while (!st.empty()) {
		if (answer[a][goal] == 1)
			return;
		int x = st.top();
		st.pop();
		for (int i = 1; i <= N; i++) {
			if (x == i)
				continue;
			if (graph[x][i] == 1 && visit[x][i]!=1) {
				answer[a][i] = 1;
				st.push(i);
				visit[x][i] = 1;
			}
		}
	}
}

void re() {
	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= N; j++) {
			visit[i][j] = 0;
		}
	}
	while (!st.empty()) {
		st.pop();
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> N;
	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= N; j++) {
			cin >> graph[i][j];
			if (graph[i][j] == 1)
				answer[i][j] = 1;
		}
	}
	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= N; j++) {
			if (answer[i][j] ==0) {
				a = i;
				st.push(i);
				f(j);
				re();
			}
		}
	}
	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= N; j++) {
			cout << answer[i][j]<<" ";
		}
		cout << "\n";
	}
}