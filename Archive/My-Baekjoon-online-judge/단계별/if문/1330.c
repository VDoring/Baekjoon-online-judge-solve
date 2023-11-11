#include <stdio.h>
int main() {
	int num1, num2;
	scanf("%d", &num1);
	scanf("%d", &num2);

	if (num1 > num2) printf(">");
	else if (num1 == num2) printf("==");
	else if (num1 < num2) printf("<");

	return 0;
}