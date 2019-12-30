#include <stdio.h>
int main() {
	short numarr[10000] = { 0, }; //10000보다 작은 수만 들어오므로 메모리 절약을 위한 short형 배열 선언
								  //입력한 값들을 저장하는 역할
	int N, X; //N: 입력할 숫자 갯수
			  //X: 비교할 숫자

	scanf("%d %d", &N, &X); // 입력할 숫자 갯수, 비교할 숫자 입력
	for (int i = 0; i < N; i++) {
		scanf("%d", &numarr[i]); //입력한 숫자 갯수만큼 배열에 값을 저장
	}

	for (int i = 0; i < N; i++) {
		if (X > numarr[i]) { //입력한 값들이 비교할 숫자보다 작다면
			printf("%d ", numarr[i]); //그 입력한 값을 출력
		}
	}
}