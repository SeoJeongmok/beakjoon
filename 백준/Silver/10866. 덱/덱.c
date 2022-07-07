#include<stdio.h>
#include<string.h>
#define qs 10001
int queue[qs], front = 0, rear = 0;
int isempty() {
	if (front == rear)
		return 1;
	else return 0;
}
void push_front(int a) {
	queue[front] = a;
	front = (front - 1 + qs) % qs;
}
void push_back(int a) {
	rear = (rear + 1) % qs;
	queue[rear] = a;
}
int pop_front() {
	if (isempty()) return -1;
	front = (front + 1) % qs;
	return queue[front];
}
int pop_back() {
	if (isempty()) return -1;
	int temp = queue[rear];
	rear = (rear - 1 + qs) % qs;
	return temp;
}
int peek() {
	if (isempty()) return -1;
	return queue[(front+1)%qs];
}
int back() {
	if (isempty()) return -1;
	return queue[rear];
}
int size() {
	return (rear - front + qs) % qs;
}
int main()
{
	int item, n;
	char s[20];
	char* pushf = "push_front", * pushb = "push_back", * popf = "pop_front", *popb = "pop_back";
	char* siz = "size", *empty = "empty", *fron = "front", *bac = "back";
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%s", s);
		if (strcmp(s,empty)==0) {
			printf("%d\n", isempty());
		}
		else if (strcmp(s,fron)==0) {
			printf("%d\n", peek());
		}
		else if (strcmp(s,pushf)==0) {
			scanf("%d", &item);
			push_front(item);
		}
		else if (strcmp(s, pushb) == 0) {
			scanf("%d", &item);
			push_back(item);
		}
		else if (strcmp(s,popf)==0) {
			printf("%d\n", pop_front());
		}
		else if (strcmp(s, popb) == 0) {
			printf("%d\n", pop_back());
		}
		else if (strcmp(s,siz)==0) {
			printf("%d\n", size());
		}
		else if (strcmp(s,bac)==0) {
			printf("%d\n", back());
		}
	}
}