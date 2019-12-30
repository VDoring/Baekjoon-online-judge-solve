/* 작동안됨 */

#include <stdio.h>
int main() {

	/*
	A > B > C
	A > C > B
	B > A > C
	B > C > A
	C > A > B
	C > B > A
	*/

	int num1, num2, num3;
	scanf("%d %d %d", &num1, &num2, &num3);

	if (num2 > num1) {// B > A
		if (num1 > num3) {//A > C
			printf("%d", num1); // B > A > C
		}
		else {//C > A
			if (num2 > num3) {//B > C
				printf("%d", num3); // B > C > A
			}
		}
		if (num3 > num2) {//C > B
			printf("%d", num2); // C > B > A
		}
	}
	if (num1 > num2) {//A > B
		if (num2 > num3) { //B > C
			printf("%d", num2); // A > B > C
		}
		else { //B < C
			printf("%d", num3); // A > C > B
		}
		if (num3 > num1) {//C > A
			printf("%d", num1); // C > A > B
		}
	}
	else {
		if (num1 == num2 && num2 > num3) {
			printf("%d", num2); // A = B > C
		}
		if (num2 == num3 && num1 > num2) {
			printf("%d", num2); // A > B = C
		}
		if (num1 == num2 && num2 == num3) {
			printf("%d", num2); // A = B = C
		}
		if (num1 == num3 && num2 > num3) {
			printf("%d", num3); // B > A = C
		}
		if (num1 == num3 && num3 > num2) {
			printf("%d", num3); // B < A = C
		}
	}
}