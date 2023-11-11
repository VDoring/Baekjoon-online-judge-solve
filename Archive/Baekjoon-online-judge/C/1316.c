//#include <stdio.h>
//#include <string.h>
//int main() {
//	int words_n;     //�ܾ��
//	char words[101]; //�ܾ�(���ڿ�)
//	int words_len;   //�ܾ����
//	char word_log[27] = { 0, }; //���ݱ��� ���� ���ڰ� ���Դ��� ����
//	char prev = -1, now; //�����ܾ�, ����ܾ�
//	int same_word = 0; //������ ���� �ܾ��� ��
//	int group_word_count = 0;
//
//	scanf("%d", &words_n); // �Է¹��� �ܾ�� �Է�
//
//	for (int i = 0; i < words_n; i++) { // �ܾ����ŭ �ݺ�
//		scanf("%s", &words);        // �ܾ�ڿ� �Է�
//		words_len = strlen(words); // �ܾ�ڿ��� ���� ����
//
//		for (int j = 0; j < words_len; j++) { //�ܾ���̸�ŭ �ݺ�
//
//			now = words[j]; // �ܾ�ڿ����� �ܾ� ����
//
//			if (prev != now) { //�������� �ٸ� ���ڰ� ���°��(���ο� ���ڰ� ���°��)
//				for (int k = 0; k < 26; k++) {
//					if (now == word_log[k]+97) // ���� ���ڰ� ������ ���� ���ڿ� �������
//						same_word++;
//				}
//				if (same_word > 0) { // ���� ���ڰ� ������ ���� ���ڿ� ���� ��찡 �߰ߵ� ���
//					break; // ���� �ܾ� ã�� ����. ���� �ܾ�� �Ѿ
//				}
//			}
//			prev = now;
//			word_log[words[j]-'a']++;
//		}
//		if (same_word == 0)
//			group_word_count++;
//
//		// ���ο� �ܾ �����ϹǷ� �� �ʱ�ȭ
//		for (int clear = 0; clear < 26; clear++)
//			word_log[clear] = 0;
//		prev = -1;
//		same_word = 0;
//	}
//
//	printf("%d", group_word_count);
//}


#include <stdio.h>
#include <string.h>

char str[101];
char prev_alphabet[27];

void clearValue() {
	for (int i = 0; i < 101; i++) // ����� �Է°� �ʱ�ȭ
		str[i] = 0;

	for (int i = 0; i < 27; i++) // ���� �ܾ� ���� ��� �ʱ�ȭ
		prev_alphabet[i] = 0;
}

int main() {
	int n;
	int group_num_cnt;
	int str_n;

	scanf("%d", &n);

	group_num_cnt = n;

	for (int i = 0; i < n; i++) {
		clearValue();

		scanf("%s", &str);
		str_n = strlen(str);

		prev_alphabet[str[0]-97]++; // ���� ù ���ĺ��� �񱳴���� �����Ƿ� prev�� ��� �� �н�

		for (int j = 1; j < str_n; j++) {
			if (str[j - 1] != str[j]) { // ���� ���ĺ��� ���� ���ĺ��� �ٸ��ٸ�
				if (prev_alphabet[str[j]-97] == 1) { // ���� ���ĺ��� ������ ���Դٸ�
					group_num_cnt--; // ���� �ܾ�� �׷�ܾ �ƴ�. ī��Ʈ -1
					break; // ���� �ܾ� �˻����� �Ѿ
				}
				else { // ���� ���ĺ��� ������ ������ �ʾҴٸ�
					prev_alphabet[str[j]-97]++; // prev�� ���
					//continue; // �Ѿ.
				}
			}
		}
		clearValue();
	}

	printf("%d", group_num_cnt);
}