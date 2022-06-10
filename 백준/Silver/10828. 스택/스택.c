#include<stdio.h>
int stack[10000], top = -1;
int isempty() {
	if (top == -1)
		return 1;
	else return 0;
}
void push(int a) {
	stack[++top] = a;
}
int pop() {
	if (isempty()) return -1;
	else return stack[top--];
}
int size() {
	return top + 1;
}
int peek() {
	if (isempty()) return -1;
	else return stack[top];
}
int main()
{
	int item,n;
	char s[10];
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%s", s);
		if (s[0] == 'e') {
			printf("%d\n",isempty());
		}
		else if (s[0] == 't') {
			printf("%d\n", peek());
		}
		else if (s[0] == 'p'&&s[1]=='u') {
			scanf("%d", &item);
			push(item);
		}
		else if (s[0] == 'p'&&s[1]=='o') {
			printf("%d\n", pop());
		}
		else if (s[0] == 's') {
			printf("%d\n", size());
		}
	}
}