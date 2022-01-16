#include <stdio.h>
int main() {
	int num;

	scanf("%d", &num);

	while (num != 1) {
		for (int i = 2; ; i++) {
			if (num % i == 0) {
				num /= i;
				printf("%d\n", i);
				break;
			}
		}
	}
}