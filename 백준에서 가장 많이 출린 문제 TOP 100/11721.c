#include <stdio.h>
#include <string.h>
int main() {
	char text[100] = { 0, }; //문자를 저장할 배열
	int input_startcount = 0, input_maxcout = 10; //입력용 반복문 카운트
	int output_startcount = 0, output_maxcount = 10; //출력용 반복문 카운트
	int i, j; //반복문 안 변수

	while (1) {
		for (i = input_startcount; i < input_maxcout; i++) { //문자 입력
			scanf("%c", &text[i]);
		}
		if (text[i-1] != 0) { //문자가 더 저장되있을경우
			input_startcount += 10;
			input_maxcout += 10;
			continue; //다음 배열칸으로 옮긴뒤 다시 입력
		}

		while (1) {
			for (j = output_startcount; j < output_maxcount; j++) { //문자 출력
				printf("%c", text[j]);
			}
			if (text[j-1] != 0) { //문자가 더 저장되있을경우
				output_startcount += 10;
				output_maxcount += 10;
				continue; //다음 배열칸으로 옮긴뒤 다시 출력
			}
			else
				goto EXIT; //출력 끝
		}
	}
EXIT:
	return 0;
}