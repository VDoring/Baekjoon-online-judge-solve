#include <stdio.h>
int main() {
	int input;

	scanf("%d", &input);

	for (int i = input; i > 0; i--) {
		for (int j = 0; j < i; j++) {
			printf("*");
		}
		printf("*");
	}
	return 0;
}

// https://www.acmicpc.net/problem/2438
// º¸·ùÁß