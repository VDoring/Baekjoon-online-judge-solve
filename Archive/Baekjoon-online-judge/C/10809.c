//#include <stdio.h>
//#include <string.h> 
//
//int main() {
//	char word[] = { 0, };
//	int is_found = 0; // ���� ���ĺ��� ã�Ҵ��� ����. 0�̸� ã�� ����. 1�̸� ã��. 
//
//	scanf("%s", &word);
//
//	//printf("%c", word[0]);
//	//printf("%d", strlen(word));
//
//	int n = strlen(word);
//
//	for (int i = 0; i < n; i++) {
//		for (int j = 97; j <= 122; j++) {
//			if (word[i] == j) {
//				printf("%d ", j - 97);
//				is_found = 1;
//				break;
//			}
//		}
//		if (is_found == 0) {
//			printf("-1 ");
//		}
//		is_found = 0;
//	}
//
//}


#include <stdio.h>
#include <string.h>
int main() {
	char s[101]; // ����� ���ڿ� ����
	int s_locate[27]; // ����� ���ڿ����� �� ���ĺ��� ��� ��ġ�� �ִ��� ����
	int i, j;

	for (i = 0; i < 27; i++)
		s_locate[i] = -1;

	scanf("%s", s);

	int s_len = strlen(s);

	for (i = 0; i < s_len; i++) { // ���ڿ� ����ŭ �ݺ�
		for (j = 97; j <= 122; j++) { // ���ĺ� ����ŭ �ݺ�
			if (s[i] == j) {// ���ĺ� ĳġ��
				if (s_locate[s[i] - 97] >= 0) // �̹� ������ �� �ִ� ���
					break;
				s_locate[s[i] - 97] = i;
				break;
			}
		}
	}

	for (i = 0; i < 26; i++)
		printf("%d ", s_locate[i]);
}