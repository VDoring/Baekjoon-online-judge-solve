#include <stdio.h>
int main() {
	int input1, input2;
	scanf("%d %d", &input1, &input2);

	printf("%d\n", input1 + input2);
	printf("%d\n", input1 - input2);
	printf("%d\n", input1 * input2);
	printf("%d\n", input1 / input2);
	printf("%d", input1 % input2);

	return 0;

}