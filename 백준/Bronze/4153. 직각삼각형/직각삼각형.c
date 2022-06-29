# include <stdio.h>
int main() {
	int a, b, c, temp;
	while (1) {
		scanf("%d", &a);
		scanf("%d", &b);
		scanf("%d", &c);
		if (a == 0 && b == 0 && c == 0)
			break;
		if (a > c) {
			temp = a;
			a = c;
			c = temp;
		}
		if (b > c) {
			temp = b;
			b = c;
			c = temp;
		}
		if (c * c == a * a + b * b)
			printf("right\n");
		else
			printf("wrong\n");
	}
	return 0;
}