#include <stdio.h>
#include <math.h>

int main() {
	int a, b, c;
	while (1) {
		scanf("%d %d %d", &a, &b, &c);

		if (a == 0 && b == 0 && c == 0)
			return 0;

		// 规过 1
		/*a = (int)pow((double)a, (double)2);
		b = (int)pow((double)b, (double)2);
		c = (int)pow((double)c, (double)2);*/

		// 规过 2
		a = a * a;
		b = b * b;
		c = c * c;

		if (((a + b) == c) || ((b + c) == a) || ((c + a) == b))
			printf("right\n");
		else
			printf("wrong\n");
	}
}