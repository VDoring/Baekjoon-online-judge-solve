#include <stdio.h>
#include <string.h>
int main() {
	int input;

	/*
	while (1) {
		for (int i = 0; i < 10; i++) {
			scanf("%c", &input);
			printf("%c", input);

			if (scanf("%c", &input) != EOF) continue;
			else break;
		}
	}*/

	/*
	int i = 0;
	while (1) {
		while (1) { //아니면 scanf("%c", &input) != EOF 넣기
			scanf("%c", &input);
			printf("%c", input);
			i++;

			if (i == 10 || scanf("%c", &input) == EOF stdin == EOF) break; //10번 돌거나 입력값이 더이상 없을때 종료
			else continue;
		}
		if (scanf("%c", &input) == EOF) continue; //입력값이 남았는지 확인. 있으면 다시 반복문 실행
		else break; 
	}
	*/

	int i = 0;
	while (scanf("%c", &input) != EOF) {
		if (i == 10 || scanf("%c", &input) == EOF) break; //10번 돌거나 입력값이 더이상 없을때 종료. printf("%c", input) == 0 로도 비교 넣어보기
		printf("%c", input);
	}

}