//#include <stdio.h>
//#include <string.h> 
//
//int main() {
//	char word[] = { 0, };
//	int is_found = 0; // 같은 알파벳을 찾았는지 여부. 0이면 찾지 못함. 1이면 찾음. 
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
	char s[101]; // 사용자 문자열 저장
	int s_locate[27]; // 사용자 문자열에서 각 알파벳이 어느 위치에 있는지 저장
	int i, j;

	for (i = 0; i < 27; i++)
		s_locate[i] = -1;

	scanf("%s", s);

	int s_len = strlen(s);

	for (i = 0; i < s_len; i++) { // 문자열 수만큼 반복
		for (j = 97; j <= 122; j++) { // 알파벳 수만큼 반복
			if (s[i] == j) {// 알파벳 캐치면
				if (s_locate[s[i] - 97] >= 0) // 이미 연산한 적 있는 경우
					break;
				s_locate[s[i] - 97] = i;
				break;
			}
		}
	}

	for (i = 0; i < 26; i++)
		printf("%d ", s_locate[i]);
}