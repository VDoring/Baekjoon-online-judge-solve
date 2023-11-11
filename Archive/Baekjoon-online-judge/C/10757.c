// 답지 참조
// https://kiffblog.tistory.com/172

//더 강해져서 돌아오겠다..

#include <stdio.h>
#include <string.h>

// 문자열을 거꾸로 뒤집는 함수
void reverse(char arr[]) {
	int len = strlen(arr); // 문자열의 길이 구함

	for (int i = 0; i < len / 2; i++) { //(문자열길이 / 2 를 한 이유는 문자열길이의 반만 해도 reverse가 되기 때문이다. 중심축을 정하고 하나씩 바꾸기!)
		char temp = arr[i]; // 하나의 문자 임시저장
		arr[i] = arr[len - i - 1]; // (i=0기준) 맨 앞의 문자를 맨 뒤의 문자로 바꾸기
		arr[len - i - 1] = temp; // (i=0기준) 맨 뒤의 문자를 맨 앞의 문자로 바꾸기
	}
}

int main() {
	// 10^1은 두자리, 10^2는 세자리, 10^10은 열 한자리, 10^10000은 만 한자리이다.
	// 이정도 크기의 수를 담을 수 있는 배열 a,b를 선언하고, 결과를 저장할 배열 res도 만든다.
	char a[10002] = { 0, }, b[10002] = { 0, }, res[10003] = { 0, };
	int carry = 0; // (받아올림)

	//값 입력
	scanf("%s %s", a, b);

	// 세로 덧셈을 할 때 받아올림을 해야한다. 그 과정을 편하게 하기 위해 역순정렬(reverse)을 한다.
	reverse(a);
	reverse(b);

	// 어느 자리 숫자까지 더해야하는지는 큰 수가 결정하므로, 큰 수의 자릿수만큼 덧셈이 이루어져야 한다.
	int len; // (더 긴 숫자(더 큰 배열)의 길이 저장)
	if (strlen(a) > strlen(b))
		len = strlen(a);
	else
		len = strlen(b);

	for (int i = 0; i < len; i++) {
		// 각 자리에 숫자들이 char형으로 저장되어 있는 상태이다.
		// 따라서 문자를 숫자로 변환하고, 받아올림도 포함해야하므로 carry값도 함께 더한다.
		int sum = a[i] - '0' + b[i] - '0' + carry;

		// a[i] 또는 b[i]가 NULL일때도 뺄셈이 발생한다.
		// 따라서 0 이상이 될 때까지 문자 0의 아스키 코드 값을 더한다.
		while (sum < 0)
			sum += '0';

		// 받아올림 여부를 확인한다.
		if (sum > 9)
			carry = 1;
		else
			carry = 0;

		// 숫자를 다시 문자로 만들고, 받아올림 하고 남은 일의 자리 수의 아스키코드를 저장한다.
		res[i] = sum % 10 + '0';
	}

	// 가장 큰 자릿수에서 받아올림이 발생하면 배열의 마지막에 1을 추가한다.
	if (carry == 1)
		res[len] = '1';

	// 덧셈을 완료하였다. 역순으로 정렬해 복원하여 출력한다.
	reverse(res);
	printf("%s", res);

}