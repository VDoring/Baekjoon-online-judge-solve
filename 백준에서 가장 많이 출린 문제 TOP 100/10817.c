/* �۵��ȵ� */

// �̺��� �� ���� ����� ����!
// ��! if��~!

#include <stdio.h>
int main() {
	int num1, num2, num3;
	scanf("%d %d %d", &num1, &num2, &num3);

	if (num2 > num1 && num1 > num3) { //num1��� case 1
		printf("%d", num1);
		return 0;
	}
	if (num2 < num1 && num3 > num1) { //num1��� case 2
		printf("%d", num1);
		return 0;
	}

	if (num1 > num2 && num2 > num3) { //num2��� case 1
		printf("%d", num2);
		return 0;
	}
	if (num1 < num2 && num2 < num3) { //num2��� case 2
		printf("%d", num2);
		return 0;
	}

	if (num1 > num3 && num3 > num2) { //num3��� case 1
		printf("%d", num3);
		return 0;
	}
	if (num1 < num3 && num3 < num2) { //num3��� case 2
		printf("%d", num3);
		return 0;
	}

	else { //����Ǵ� ���� �������
		if (num1 == num2 && (num1 + num2) != (num3 + num3)) { //num1. num2�� ���� num3�� �������
			printf("%d", num1);
			return 0;
		}

		if (num1 == num2 && num2 == num3 && num3 == num1) { //3�� �� �������
			printf("%d", num1);
			return 0;
		}

		if (num1 > num2 && num1 > num3 && num1 >= (num2 + num3)) { //num2, num3�� ���� num1�� ū �Ϳ�
			printf("%d", num2);
			return 0;
		}
	}
}