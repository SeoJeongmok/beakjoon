#include<stdio.h>
#include<string.h>
int main() {
	int sum = 0;
	int c = 0;
	int j = 0,an=0,on=1;
	int a[50] = { 0 };
	char s[51] = { 0 };
	char oper[50] = { 0 };
	scanf("%s", s);
	int slen = strlen(s);
	for (int i = 0; i < slen; i++) {
		if (s[i] == 43 || s[i] == 45) {
			a[an] = i;
			an++;
		}
		if (s[i] == 45)
			c = 1;
		if (c == 1) {
			if (s[i] == 43 || s[i] == 45) {
				s[i] = 45;
			}
		}
	}
	a[an] = slen;
	oper[0] = 43;
	for (int i = 0; i < slen; i++) {
		if (s[i] == 43 || s[i] == 45) {
			oper[on] = s[i];
			on++;
		}
	}
	int l = 0;
	int queue[50];
	int front = 0;
	int rear = 0;
	while (j < slen+1) {
		char temp[6] = { 0 };
		int m = 0;
		for (int k = j; k < a[l]; k++) {
			temp[m] = s[k];
			m++;
		}
		queue[rear] = atoi(temp);
		rear++;
		j = a[l] + 1;
		l++;
	}
	l = 0;
	for (int i = 0; i < rear; i++){
		if (oper[l] == 43)
			sum = sum + queue[i];
		else
			sum = sum - queue[i];
		l++;
	}
	printf("%d\n", sum);
}