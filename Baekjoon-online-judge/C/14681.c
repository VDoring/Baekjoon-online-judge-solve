#include <stdio.h>
int main() {
	// 1��и�: a, b �Ѵ� ���
	// 2��и�: a�� ����, b�� ���
	// 3��и�: a, b �Ѵ� ����
	// 4��и�: a�� ���, b�� ����

	int a, b;
	scanf("%d", &a);
	scanf("%d", &b);

	if (a >= 0 && b >= 0) {
		printf("1");
	}
	else if (a < 0 && b >= 0) {
		printf("2");
	}
	else if (a < 0 && b < 0) {
		printf("3");
	}
	else if (a >= 0 && b < 0) {
		printf("4");
	}
		
}