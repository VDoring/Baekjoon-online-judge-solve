/* 작동안됨 */

// 이보다 더 좋은 방법은 없다!
// 와! if문~!

#include <stdio.h>
int main() {
	int num1, num2, num3;
	scanf("%d %d %d", &num1, &num2, &num3);

	if (num2 > num1 && num1 > num3) { //num1출력 case 1
		printf("%d", num1);
		return 0;
	}
	if (num2 < num1 && num3 > num1) { //num1출력 case 2
		printf("%d", num1);
		return 0;
	}

	if (num1 > num2 && num2 > num3) { //num2출력 case 1
		printf("%d", num2);
		return 0;
	}
	if (num1 < num2 && num2 < num3) { //num2출력 case 2
		printf("%d", num2);
		return 0;
	}

	if (num1 > num3 && num3 > num2) { //num3출력 case 1
		printf("%d", num3);
		return 0;
	}
	if (num1 < num3 && num3 < num2) { //num3출력 case 2
		printf("%d", num3);
		return 0;
	}

	else { //공통되는 수가 있을경우
		if (num1 == num2 && (num1 + num2) != (num3 + num3)) { //num1. num2만 같고 num3만 작은경우
			printf("%d", num1);
			return 0;
		}

		if (num1 == num2 && num2 == num3 && num3 == num1) { //3개 다 같은경우
			printf("%d", num1);
			return 0;
		}

		if (num1 > num2 && num1 > num3 && num1 >= (num2 + num3)) { //num2, num3는 같고 num1만 큰 셩우
			printf("%d", num2);
			return 0;
		}
	}
}