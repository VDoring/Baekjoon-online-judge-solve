//������ ����
#include <stdio.h>
#include <string.h>
int main()
{
	char text[100] = { 0, };

	scanf("%s", text);

	printf("%c", text[0]);
	for (int i = 1; i < strlen(text); i++) {
		if (i % 10 == 0) printf("\n");
		printf("%c", text[i]);
	}
	return 0;
}

/* ���� �ݺ� ����
#include <stdio.h>
#include <string.h>
int main()
{
	char text[100] = { 0, };

	while (1) {
		scanf("%s", text);

		printf("%c", text[0]);
		for (int i = 1; i < strlen(text); i++) {
			if (i % 10 == 0) printf("\n");
			printf("%c", text[i]);
		}
		printf("\n");
	}
	return 0;
}*/


/* ���� �� ���
#include <stdio.h>
#include <string.h>
int main() {
	char text[101] = { 0, }; //���ڸ� ������ �迭
	int input_startcount = 1, input_maxcout = 11; //�Է¿� �ݺ��� ī��Ʈ
	int output_startcount = 1, output_maxcount = 11; //��¿� �ݺ��� ī��Ʈ
	int i, j; //�ݺ��� �� ����

	while (1) {
		for (i = input_startcount; i < input_maxcout; i++) { //���� �Է�
			scanf("%c", &text[i]);
		}
		if (text[i - 1] == '\n' || text[i - 1] == 0) break;
		else if (text[i - 1] != 0) { //���ڰ� �� ������������
			input_startcount += 10;
			input_maxcout += 10;
			continue; //���� �迭ĭ���� �ű�� �ٽ� �Է�
		}
	}

	while (1) {
		for (j = output_startcount; j < output_maxcount; j++) { //���� ���
			if (text[j] == '\n') break;
			printf("%c", text[j]);
		}
		if (text[j] == '\n' || text[j]== 0) break;
		else if (text[j] != 0) { //���ڰ� �� ������������
			printf("\n");
			output_startcount += 10;
			output_maxcount += 10;
			continue; //���� �迭ĭ���� �ű�� �ٽ� ���
		}
	}
	return 0;
}*/