#include <stdio.h>
#include <string.h>
int main() {
	int input;

	/*
	while (1) {
		for (int i = 0; i < 10; i++) {
			scanf("%c", &input);
			printf("%c", input);

			if (scanf("%c", &input) != EOF) continue;
			else break;
		}
	}*/

	/*
	int i = 0;
	while (1) {
		while (1) { //�ƴϸ� scanf("%c", &input) != EOF �ֱ�
			scanf("%c", &input);
			printf("%c", input);
			i++;

			if (i == 10 || scanf("%c", &input) == EOF stdin == EOF) break; //10�� ���ų� �Է°��� ���̻� ������ ����
			else continue;
		}
		if (scanf("%c", &input) == EOF) continue; //�Է°��� ���Ҵ��� Ȯ��. ������ �ٽ� �ݺ��� ����
		else break; 
	}
	*/

	int i = 0;
	while (scanf("%c", &input) != EOF) {
		if (i == 10 || scanf("%c", &input) == EOF) break; //10�� ���ų� �Է°��� ���̻� ������ ����. printf("%c", input) == 0 �ε� �� �־��
		printf("%c", input);
	}

}