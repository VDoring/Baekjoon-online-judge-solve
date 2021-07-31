#include <stdio.h>
int main() {
	// 1사분면: a, b 둘다 양수
	// 2사분면: a는 음수, b는 양수
	// 3사분면: a, b 둘다 음수
	// 4사분면: a는 양수, b는 음수

	int a, b;
	scanf("%d", &a);
	scanf("%d", &b);

	if (a >= 0 && b >= 0) {
		printf("1");
	}
	else if (a < 0 && b >= 0) {
		printf("2");
	}
	else if (a < 0 && b < 0) {
		printf("3");
	}
	else if (a >= 0 && b < 0) {
		printf("4");
	}
		
}