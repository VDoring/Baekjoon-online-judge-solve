#include <stdio.h>

int fac(int input) {
	/*
	* ù �ڵ� �ۼ� ����
	int res = input;

	if (input == 0)
		return 1;
	else if (input == 1)
		return 1;
	else {
		res *= fac(res - 1);
		return res;
	}*/

	// ���� ����
	if (input > 1) // �Է°��� 2 �̻��̸� 
		return input * fac(input - 1); // ���丮�� ����� �Ѵ�.
	else // �Է°��� 1 �����̹Ƿ�
		return 1; // ����� 1�̴�.
}

int main() {
	int input;

	scanf("%d", &input);

	printf("%d", fac(input));
}