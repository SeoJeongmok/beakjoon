#include<stdio.h>
#include<string.h>
#define sz 1000000
int main() {
	char s[sz] = { 0 };
	int a[26] = { 0 }, max = 0, num,c=0;
	scanf("%s", s);
	int size = strlen(s);
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < 26; j++) {
			if (s[i] == (j + 65) || s[i] == (j + 97)) {
				a[j]=a[j]+1;
				break;
			}
		}
	}
	for (int i = 0; i < 26; i++) {
		if (max < a[i]) {
			max = a[i];
			num = i;
		}
	}
	for (int i = 0; i < 26; i++) {
		if (max == a[i] && num != i) {
			printf("?\n");
			c = 1;
			break;
		}
	}
	if (c == 0) {
		printf("%c\n", num + 65);
	}
	return 0;
}