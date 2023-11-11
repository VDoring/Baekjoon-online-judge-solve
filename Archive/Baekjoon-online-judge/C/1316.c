//#include <stdio.h>
//#include <string.h>
//int main() {
//	int words_n;     //단어개수
//	char words[101]; //단어(문자열)
//	int words_len;   //단어길이
//	char word_log[27] = { 0, }; //지금까지 무슨 문자가 나왔는지 저장
//	char prev = -1, now; //이전단어, 현재단어
//	int same_word = 0; //이전과 같은 단어의 수
//	int group_word_count = 0;
//
//	scanf("%d", &words_n); // 입력받을 단어개수 입력
//
//	for (int i = 0; i < words_n; i++) { // 단어개수만큼 반복
//		scanf("%s", &words);        // 단어문자열 입력
//		words_len = strlen(words); // 단어문자열의 길이 구함
//
//		for (int j = 0; j < words_len; j++) { //단어길이만큼 반복
//
//			now = words[j]; // 단어문자열에서 단어 추출
//
//			if (prev != now) { //이전과는 다른 문자가 나온경우(새로운 문자가 나온경우)
//				for (int k = 0; k < 26; k++) {
//					if (now == word_log[k]+97) // 현재 문자가 이전에 나온 문자와 같은경우
//						same_word++;
//				}
//				if (same_word > 0) { // 현재 문자가 이전에 나온 문자와 같은 경우가 발견된 경우
//					break; // 현재 단어 찾기 중지. 다음 단어로 넘어감
//				}
//			}
//			prev = now;
//			word_log[words[j]-'a']++;
//		}
//		if (same_word == 0)
//			group_word_count++;
//
//		// 새로운 단어가 시작하므로 값 초기화
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
	for (int i = 0; i < 101; i++) // 사용자 입력값 초기화
		str[i] = 0;

	for (int i = 0; i < 27; i++) // 이전 단어 나온 기록 초기화
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

		prev_alphabet[str[0]-97]++; // 현재 첫 알파벳은 비교대상이 없으므로 prev에 기록 후 패스

		for (int j = 1; j < str_n; j++) {
			if (str[j - 1] != str[j]) { // 이전 알파벳과 현재 알파벳이 다르다면
				if (prev_alphabet[str[j]-97] == 1) { // 현재 알파벳이 이전에 나왔다면
					group_num_cnt--; // 현재 단어는 그룹단어가 아님. 카운트 -1
					break; // 다음 단어 검색으로 넘어감
				}
				else { // 현재 알파벳이 이전에 나오지 않았다면
					prev_alphabet[str[j]-97]++; // prev에 기록
					//continue; // 넘어감.
				}
			}
		}
		clearValue();
	}

	printf("%d", group_num_cnt);
}