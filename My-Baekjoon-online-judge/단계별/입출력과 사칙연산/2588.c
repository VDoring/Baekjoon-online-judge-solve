#include <stdio.h>

void calc(int num1, char num2[]);

int main() {
	int num1 = 0;
	char cnum2[4] = { 0, };

	scanf("%d", &num1);
	scanf("%s", cnum2);
	calc(num1, cnum2);

	return 0;
}

void calc(int num1, char num2[]) {
	//���� 472 * 5�� �ؼ� ���
	//���� 472 * 6�� �ؼ� ���
	//���� 472 * 3�� �ؼ� ���
	//���� 2360 + 3776*10 + 1416*100 �� ����ϰ� ���

	int multiply_1 = 0, multiply_2 = 0, multiply_3 = 0;
	int result = 0;
	int i;


	i = 2;
	multiply_1 = num1 * (num2[i] - 48);
	printf("%d\n", multiply_1);

	i = 1;
	multiply_2 = num1 * (num2[i] - 48);
	printf("%d\n", multiply_2);

	i = 0;
	multiply_3 = num1 * (num2[i] - 48);
	printf("%d\n", multiply_3);


	result = multiply_1 + (multiply_2 * 10) + (multiply_3 * 100);

	printf("%d", result);
	return;

}