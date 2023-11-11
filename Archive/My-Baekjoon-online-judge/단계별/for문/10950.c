/*
먼저 몇개적을껀지 갯수를 입력받는다.
그 갯수에 따라 for문 반복 및 입력

#include <stdio.h>
#include <stdlib.h>
int main() {
	int i, arr_len;
	char *num[] = { 0, };

	scanf("%d", &arr_len);

	for (i = 0; i < arr_len; i+2) {
		scanf("%d %d", num[i], num[i+1]);
	}

	for (i = 0; i < arr_len; i+2) {
		printf("%d\n", num[i] + *num[i+1]);
	}
}

*/

#include <stdio.h>
int main() {
	int total_num;
	int first, second;
	int i;

	scanf("%d", &total_num);

	for (i = 0; i < total_num; i++) {
		scanf("%d %d", &first, &second);
		printf("%d\n", first + second);
	}

	return 0;
}