#include <stdio.h>
#include <string.h>
int main() {
	char text[100] = { 0, }; //���ڸ� ������ �迭
	int input_startcount = 0, input_maxcout = 10; //�Է¿� �ݺ��� ī��Ʈ
	int output_startcount = 0, output_maxcount = 10; //��¿� �ݺ��� ī��Ʈ
	int i, j; //�ݺ��� �� ����

	while (1) {
		for (i = input_startcount; i < input_maxcout; i++) { //���� �Է�
			scanf("%c", &text[i]);
		}
		if (text[i-1] != 0) { //���ڰ� �� ������������
			input_startcount += 10;
			input_maxcout += 10;
			continue; //���� �迭ĭ���� �ű�� �ٽ� �Է�
		}

		while (1) {
			for (j = output_startcount; j < output_maxcount; j++) { //���� ���
				printf("%c", text[j]);
			}
			if (text[j-1] != 0) { //���ڰ� �� ������������
				output_startcount += 10;
				output_maxcount += 10;
				continue; //���� �迭ĭ���� �ű�� �ٽ� ���
			}
			else
				goto EXIT; //��� ��
		}
	}
EXIT:
	return 0;
}