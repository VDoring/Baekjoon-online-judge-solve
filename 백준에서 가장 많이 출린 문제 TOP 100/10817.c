#include <stdio.h>
int main() {
	int A, B, C;
	scanf("%d %d %d", &A, &B, &C);

	if (A > B) {
		if (A > C) {
			if (B > C) {
				printf("%d", B); // A�� ����ũ�� B�� C���� Ŭ��(A > B > C)
			}
			else {//((B < C)
				printf("%d", C); // A�� ����ũ�� C�� B���� Ŭ��(A > C > B)
			}
		}
		else {//(A < C)
			printf("%d", A); // A�� B���� ũ�� C�� A�� Ŭ��(C > A > B)
		}
	}
	else {//(A < B)
		if (B > C) {
			if (A > C) {
				printf("%d", A); // B�� ����ũ�� A�� C���� Ŭ��(B > A > C)
			}
			else {//(A < C)
				printf("%d", C); // B�� ����ũ�� A�� C���� Ŭ��(B > A > C)
			}
		}
		else {//(B < C)
			printf("%d", B); // A�� B����, B�� C���� Ŭ��(A < B < C)
		}
	}
}


/* �۵��ȵ�

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
}*/