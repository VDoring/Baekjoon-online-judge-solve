#include <stdio.h>
#include <string.h>
int main() {
	char text[101] = { 0, }; //문자를 저장할 배열
	int input_startcount = 1, input_maxcout = 11; //입력용 반복문 카운트
	int output_startcount = 1, output_maxcount = 11; //출력용 반복문 카운트
	int i, j; //반복문 안 변수

	//while (1) {
	while (1) {
		for (i = input_startcount; i < input_maxcout; i++) { //문자 입력
			scanf("%c", &text[i]);
		}
		if (text[i - 1] == '\n' || text[i - 1] == 0) break;
		else if (text[i - 1] != 0) { //문자가 더 저장되있을경우
			input_startcount += 10;
			input_maxcout += 10;
			continue; //다음 배열칸으로 옮긴뒤 다시 입력
		}
	}


		//for (i = 1; i < 100; i++) scanf("%c", &text[i]);
		/* 입력은 그냥 반복문을 사용한 입력으로 바꾸기 */

	while (1) {
		for (j = output_startcount; j < output_maxcount; j++) { //문자 출력
			if (text[j] == '\n') break;
			printf("%c", text[j]);
		}
		if (text[j - 1] == '\n' || text[j - 1] == 0) break;
		else if (text[j] != 0) { //문자가 더 저장되있을경우
			printf("\n");
			output_startcount += 10;
			output_maxcount += 10;
			continue; //다음 배열칸으로 옮긴뒤 다시 출력
		}
		//else
			//goto EXIT; //출력 끝
	}
	//}
//EXIT:
	return 0;
}