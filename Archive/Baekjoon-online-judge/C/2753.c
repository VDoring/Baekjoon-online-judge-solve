#include <stdio.h>
int main() {
	// 윤년: 4의 배수이면서 100의 배수가 아닐 때
	// 윤년: 400의 배수일 때

	int n;
	scanf("%d", &n);
	
	if ((n % 4 == 0 && n % 100 != 0) || n % 400 == 0)
		printf("1");
	else
		printf("0");
}