#include<stdio.h>
#include<string.h>
#define sz 1000000
int main() {
	char s[sz] = { 0 };
	char *token;
	int count = 0;
	gets(s);
	token = strtok(s, " ");
	while (token != NULL) {
		count++;
		token = strtok(NULL, " ");
	}
	printf("%d\n", count);
	return 0;
}