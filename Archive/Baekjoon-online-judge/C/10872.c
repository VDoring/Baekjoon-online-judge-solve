#include <stdio.h>

int fac(int input) {
	/*
	* 첫 코드 작성 버전
	int res = input;

	if (input == 0)
		return 1;
	else if (input == 1)
		return 1;
	else {
		res *= fac(res - 1);
		return res;
	}*/

	// 개선 버전
	if (input > 1) // 입력값이 2 이상이면 
		return input * fac(input - 1); // 팩토리얼 계산을 한다.
	else // 입력값이 1 이하이므로
		return 1; // 결과는 1이다.
}

int main() {
	int input;

	scanf("%d", &input);

	printf("%d", fac(input));
}