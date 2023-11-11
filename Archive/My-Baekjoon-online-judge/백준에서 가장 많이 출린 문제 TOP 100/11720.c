#include <stdio.h>
int main() {
	int count, sum = 0; //넣을 숫자의 갯수, 계산된 합계
	char arr[100] = { 0, }; //더할 숫자를 저저장하는 배열

	scanf("%d", &count);
	scanf("%s", arr);

	for (int i = 0; i < count; i++) {
		sum += arr[i] - '0'; //ASCII와의 구분을 위해 '0'을 넣으므로써 정수로써 계산되게 하였음
	}
	printf("%d", sum);
}