//정석의 정답
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

/* 무한 반복 버전
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


/* 내가 한 방법
#include <stdio.h>
#include <string.h>
int main() {
	char text[101] = { 0, }; //문자를 저장할 배열
	int input_startcount = 1, input_maxcout = 11; //입력용 반복문 카운트
	int output_startcount = 1, output_maxcount = 11; //출력용 반복문 카운트
	int i, j; //반복문 안 변수

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

	while (1) {
		for (j = output_startcount; j < output_maxcount; j++) { //문자 출력
			if (text[j] == '\n') break;
			printf("%c", text[j]);
		}
		if (text[j] == '\n' || text[j]== 0) break;
		else if (text[j] != 0) { //문자가 더 저장되있을경우
			printf("\n");
			output_startcount += 10;
			output_maxcount += 10;
			continue; //다음 배열칸으로 옮긴뒤 다시 출력
		}
	}
	return 0;
}*/