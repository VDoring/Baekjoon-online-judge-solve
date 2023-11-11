#include <stdio.h>
int main() {
	int first = -1, second = -1;

	while (1) {
		scanf("%d %d", &first, &second);
		if (first != 0 && second != 0) {
			printf("%d\n", first + second);
			continue;
		}
		else break;
	}

	return 0;

}