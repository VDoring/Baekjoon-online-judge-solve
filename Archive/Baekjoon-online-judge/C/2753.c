#include <stdio.h>
int main() {
	// ����: 4�� ����̸鼭 100�� ����� �ƴ� ��
	// ����: 400�� ����� ��

	int n;
	scanf("%d", &n);
	
	if ((n % 4 == 0 && n % 100 != 0) || n % 400 == 0)
		printf("1");
	else
		printf("0");
}