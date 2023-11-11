/*
#include <stdio.h> //정상작동X
int main() {
	int num;
	int cnt = 0;
	int remainder[10 + 1];

	for (int i = 0; i < 10; i++) { //입력 및 나머지를 배열에 차례로 저장
		scanf("%d", &num);

		remainder[i] = num % 42;
	}

	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			if (i != j) { //동일한 숫자 비교 방지
				if (remainder[i] == remainder[j]) //수가 같은지 확인
					cnt++;
			}
		}
	}

	printf("%d", 10 - (cnt / 2)); //출력
								// cnt/2한 이유: 위의 계산 방식으로하면 같은 숫자가 2번 겹치기 때문.

	return 0;
}*/

#include <stdio.h>
int main() {
	int in[10+1]; //유저 10개 입력 저장
	int remainder_list[42 + 1] = { 0, }; //나머지 수 카운트
	int temp_remainder; //나머지 수 임시저장
	int cnt = 0; //서로 다른 값 카운트

	for (int i = 0; i < 10; i++) {
		scanf("%d", &in[i]);
		temp_remainder = in[i] % 42;
		remainder_list[temp_remainder]++; //나머지 수만큼의 배열칸에 +1
	}

	for (int i = 0; i < 42; i++) {
		if (remainder_list[i]) //값이 1 이상일경우
			cnt++;
	}

	printf("%d", cnt);

	return 0;
}