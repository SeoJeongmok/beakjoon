# include <stdio.h>
int main() {
	int a, b,c=0,d=0,num=1,temp;
	scanf("%d", &a);
	scanf("%d", &b);
	while (c == 0 || d == 0) {
		if (a % num == 0 && b % num == 0) {
			temp = num;
			if (temp > c)
				c = temp;
		}
		if (num % a == 0 && num % b == 0)
			d = num;
		num++;
	}
	printf("%d\n", c);
	printf("%d\n", d);
	return 0;
}