#include<stdio.h>
int queue[2000000], front = -1, rear = -1;
int isempty() {
	if (front == rear)
		return 1;
	else return 0;
}
void push(int a) {
	queue[++rear] = a;
}
int pop() {
	if (isempty()) return -1;
	else return queue[++front];
}
int peek() {
	if (isempty()) return -1;
	return queue[front + 1];
}
int back() {
	if (isempty()) return -1;
	else return queue[rear];
}
int size() {
	return rear - front;
}
int main()
{
	int item, n;
	char s[10];
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%s", s);
		if (s[0] == 'e') {
			printf("%d\n", isempty());
		}
		else if (s[0] == 't') {
			printf("%d\n", peek());
		}
		else if (s[0] == 'p' && s[1] == 'u') {
			scanf("%d", &item);
			push(item);
		}
		else if (s[0] == 'p' && s[1] == 'o') {
			printf("%d\n", pop());
		}
		else if (s[0] == 's') {
			printf("%d\n", size());
		}
		else if (s[0] == 'f') {
			printf("%d\n", peek());
		}
		else if (s[0] == 'b') {
			printf("%d\n", back());
		}
	}
}