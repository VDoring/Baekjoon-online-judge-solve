#include <stdio.h>
int main() {
	int numlist[10001];
	int usermin, usermax;
	int primemin = 99999, primesum = 0;

	scanf("%d", &usermin);
	scanf("%d", &usermax);

	if (usermin == 0 || usermin == 1)
		usermin = 2;

	for (int i = 2; i <= 10000; i++) { // 배열 초기화 
		numlist[i] = i;
	}

	for (int i = 2; i <= 10000; i++) { // 소수가 아닌 수 제거(=소수 구하기)
		if (numlist[i] == 0)
			continue;
		for (int j = i + i; j <= 10000; j += i) {
			numlist[j] = 0;
		}
	}

	for (int i = usermin; i <= usermax; i++) { // 사용자가 원하는 값 합계 및 최소값 수집
		if (numlist[i] == 0)
			continue;

		primesum += i;
		if (primemin > i)
			primemin = i;
	}
	
	if (primesum == 0)
		printf("-1");
	else
		printf("%d\n%d", primesum, primemin);
}

//#include <stdio.h>
//#include <math.h>
//int main() {
//	int numlist[10051] = { 0, };
//	int usermin, usermax;
//	int primemin = 99999, primesum = 0;
//
//	scanf("%d", &usermin);
//	scanf("%d", &usermax);
//
//	if (usermin == 0 || usermin == 1)
//		usermin = 2;
//
//	for (int i = usermin; i <= usermax; i++) { // 사용자가 찾을 소수의 범위만 숫자를 나열해 배열을 초기화한다. 
//		numlist[i] = i;
//	}
//
//	for (int i = 0; i < 10050; i++) { // 소수가 아닌 수를 제거한다. 
//		if (numlist[i] == 0) //이미 삭제된 값을 패스한다 
//			continue;
//		for (int j = i + i; j <= usermax; j += i) // i 의 배수를 제거한다.
//			numlist[j] = 0;
//	}
//
//	for (int i = 0; i < 10050; i++) { // 소수인 수의 합을 구하고 최소값을 구한다. 
//		if (numlist[i] == 0)
//			continue;
//
//		primesum += numlist[i];
//		if (primemin > i)
//			primemin = i;
//	}
//
//	printf("%d\n%d", primesum, primemin);
//}

//// 기본적인 소수 확인 방법 
//// O(n)의 시간복잡도를 가짐. 
//#include <stdio.h>
//#include <stdbool.h>
//
//bool isPrimeNumber(int x) { // 소수 판별 함수 
//	for (int i = 2; i < x; i++) { // 2부터 시작해 n-1까지 
//		if (x % i == 0) // 약수가 발견된다면 
//			return false;
//	}
//	return true;
//}
//
//int main() {
//	printf("%d\n", isPrimeNumber(100)); // 100이 소수인가? -> 0(아니오) 
//	printf("%d", isPrimeNumber(97));    // 97이 소수인가? -> 1(예)
//	return 0;
//}

//// 소수를 구하는 또 다른 방법 
//// O(N^(1/2))
//#include <stdio.h>
//#include <stdbool.h>
//#include <math.h>
//
//bool isPrimeNumber(int x) {
//	int end = (int)sqrt(x); // 약수인지 확인
//	for (int i = 2; i <= end; i++) {
//		if (x % i == 0)
//			return false;
//	}
//	return true;
//}
//
//int main(void) {
//	printf("%d", isPrimeNumber(97));
//	return 0;
//}

//에라토스테네스의 체
//#include <stdio.h>
//
//int number = 100000;
//int a[100001];
//
//void primeNumberSieve() {
//	for (int i = 2; i <= number; i++) { //배열 초기화
//		a[i] = i;
//	}
//
//	for (int i = 2; i <= number; i++) { // 소수가 아닌 수를 지운다 
//		if (a[i] == 0) // 이미 지워진 숫자면 그 다음수 진행 
//			continue;
//		for (int j = i + i; j <= number; j += i) { // i의 배수들을 삭제한다 
//			a[j] = 0;
//		}
//	}
//
//	for (int i = 2; i <= number; i++) { // 소수를 출력한다. 
//		if (a[i] != 0) //지워지지 않은 숫자면 
//			printf("%d ", a[i]); //출력
//	}
//}
//
//int main() {
//	primeNumberSieve();
//}