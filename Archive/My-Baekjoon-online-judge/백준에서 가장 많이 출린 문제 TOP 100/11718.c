#include <stdio.h>
int main() {
	char input;

	while (scanf("%c", &input) != EOF) { //�ϳ��� ���ڷ� �Է� �� EOF üũ(EOF�Ͻ� while ����)
		printf("%c", input); //stdin���� ����(�����̽� ����)�ϳ��� ������ EOF�� �ɶ����� ���
	}
}