#include <stdio.h>
int main() {
	char input;

	while (scanf("%c", &input) != EOF) { //하나의 문자로 입력 및 EOF 체크(EOF일시 while 종료)
		printf("%c", input); //stdin에서 글자(스페이스 포함)하나씩 꺼내와 EOF가 될때까지 출력
	}
}