#include <stdio.h>
int main() {
	/*
	|A > B > C
	||C > B > A
	||B > C > A
	|A > C > B
	||B > A > C
	|C > A > B
	*/

	int A, B, C;
	scanf("%d %d %d", &A, &B, &C);

	if (A > B) {
		if (C > B) {
			if (A > C) {
				printf("%d", C); // A > C > B
			}
			else {
				printf("%d", A); // C > A > B
			}
		}
		else {//B > C
			printf("%d", B); // A > B > C
		}
	}
	else {//B > A
		if (C > B) {
			printf("%d", B); // C > B > A
		}
		else {//B > C
			if (A > C) {
				printf("%d", A); // B > A > C
			}
			else {
				printf("%d", C); // B > C > A
			}
		}
	}
}