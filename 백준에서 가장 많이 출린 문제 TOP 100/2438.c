//나만의 방식
#include <stdio.h>
int main() {
	int input;

	scanf("%d", &input);
	int star = input;

	star = star - star + 1;
	for (int i = 0; i < input; i++) {
		for (int j = 0; j < star; j++) {
			printf("*");
		}
		printf("\n");
		star++;
	}
}

//정답
#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	for (int i = 1; i <= n; ++i) {
		for (int j = 1; j <= i; ++j) {
			printf("*");
		}
		puts("");
	}
	return 0;
}
