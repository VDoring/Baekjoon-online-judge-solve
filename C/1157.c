//#include <stdio.h>
//#include <string.h>
//int main()
//{
//    char s[1000001] = { 0, };
//    char alphabet_list[26] = { 0, };
//    int locate = 0;
//    char alphabet_max_list[26] = { 0, };
//    int max_locate = -1;
//    int max = -1;
//
//-   scanf("%s", s);
//
//    for (int i = 0; i < strlen(s); i++) { // 대문자를 소문자로 변환
//        if(s[i] >= 65 && s[i] <= 90)
//            s[i] += 32;
//    }
//
//    for (int i = 0; i < strlen(s); i++) { // 특정 알파벳이 얼마나 나왔는지 순서대로 기록
//        locate = s[i] - 97;
//        alphabet_list[locate] += 1;
//    }
//    
//    for (int i = 0; i < strlen(alphabet_list); i++) { // 가장 많이 나온 알파벳이 뭔지 파악
//                                                      // 가장 많이 나온 알파벳 수가 동일한지 확인하기
//        if (max <= alphabet_list[i]) { //특정 알파벳 갯수가 max보다 많다면
//            max_locate = i; //max 알파벳 위치 갱신
//            max = alphabet_list[i]; //max 알파벳 갯수 갱신
//            alphabet_max_list[i] += max;
//        }
//    }
//
//    for (int i = 0; i < strlen(alphabet_max_list); i++) {
//        for (int j = i + 1; j < strlen(alphabet_max_list); j++) {
//            if (alphabet_max_list[i] == alphabet_max_list[j]) {
//                printf("?");
//                return 0;
//            }
//        }
//    }
//
//    printf("%c", alphabet_list[max_locate]+97);
//            
//
//    
//
//}


#include <stdio.h>
#include <string.h>
int main() {
	char input[1000001]; // 사용자 입력
	int alphabet_count_list[26 + 1] = { 0, }; // 사용자가 입력한 문자열을 문자(알파벳)로 분리하여 각 문자(알파벳)의 카운트를 저장
	int alphabet_max_list[2] = { 0, }; //[0]=가장 많이 나온 알파벳의 카운트, [1]=가장 많이 나온 알파벳의 아스키코드-65 or -97.(i값 저장)
	int is_alphabet_max_count_same = 0; // 가장 많이 나온 알파벳의 카운트와 같은 알파벳이 있을경우 true.

	scanf("%s", input);
	int strlen_input = strlen(input);

	for (int i = 0; i < strlen_input; i++) { // 대문자와 소문자가 같이 있을 수 있는 입력이므로 반복문을 이용해 처리하고, 각 알파벳의 카운트를 저장한다.
		//if (65 <= input[i] && 90 >= input[i])
		//	alphabet_count_list[input[i] - 65]++;
		//else if (97 <= input[i] && 122 >= input[i])
		//	alphabet_count_list[input[i] - 97]++;

		if(input[i] < 97) // 대문자일 경우
			alphabet_count_list[input[i] - 65]++;
		else              // 소문자일 경우
			alphabet_count_list[input[i] - 97]++;
	}

	for (int i = 0; i < 26; i++) { // 가장 많이 나온 알파벳의 카운트와 위치를 찾는다.
		if (alphabet_max_list[0] < alphabet_count_list[i]) {
			alphabet_max_list[0] = alphabet_count_list[i];
			alphabet_max_list[1] = i;
		}
	}

	for (int i = 0; i < 26; i++) { // 가장 많이 나온 알파벳의 카운트를 한번 더 검색한다. 이때 이전 최대 카운트와 같은 값이 나온다면 ?를 출력하게 설정한다.
		if (alphabet_max_list[0] == alphabet_count_list[i])
			if (alphabet_max_list[1] != i) {
				is_alphabet_max_count_same = 1;
				break;
			}
	}

	if (is_alphabet_max_count_same == 1) // 출력
		printf("?\n");
	else
		printf("%c", alphabet_max_list[1] + 65);
}