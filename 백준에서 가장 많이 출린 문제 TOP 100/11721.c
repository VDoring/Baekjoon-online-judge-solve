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
		if(text[i - 1] == '\n' || text[i - 1] == 0) {}
		else if (text[i-1] != 0) { //���ڰ� �� ������������
			input_startcount += 10;
			input_maxcout += 10;
			continue; //���� �迭ĭ���� �ű�� �ٽ� �Է�
		}


		//for (i = 1; i < 100; i++) scanf("%c", &text[i]);
		/* �Է��� �׳� �ݺ����� ����� �Է����� �ٲٱ� */

		while (1) {
			for (j = output_startcount; j < output_maxcount; j++) { //���� ���
				printf("%c", text[j]);
			}
			if (text[j - 1] == '\n' || text[j - 1] == 0) {}
			else if (text[j] != 0) { //���ڰ� �� ������������
				printf("\n");
				output_startcount += 10;
				output_maxcount += 10;
				continue; //���� �迭ĭ���� �ű�� �ٽ� ���
			}
			//else
				//goto EXIT; //��� ��
			break;
		}
	}
//EXIT:
	return 0;
}