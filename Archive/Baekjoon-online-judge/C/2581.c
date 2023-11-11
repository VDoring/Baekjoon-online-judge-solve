#include <stdio.h>
int main() {
	int numlist[10001];
	int usermin, usermax;
	int primemin = 99999, primesum = 0;

	scanf("%d", &usermin);
	scanf("%d", &usermax);

	if (usermin == 0 || usermin == 1)
		usermin = 2;

	for (int i = 2; i <= 10000; i++) { // �迭 �ʱ�ȭ 
		numlist[i] = i;
	}

	for (int i = 2; i <= 10000; i++) { // �Ҽ��� �ƴ� �� ����(=�Ҽ� ���ϱ�)
		if (numlist[i] == 0)
			continue;
		for (int j = i + i; j <= 10000; j += i) {
			numlist[j] = 0;
		}
	}

	for (int i = usermin; i <= usermax; i++) { // ����ڰ� ���ϴ� �� �հ� �� �ּҰ� ����
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
//	for (int i = usermin; i <= usermax; i++) { // ����ڰ� ã�� �Ҽ��� ������ ���ڸ� ������ �迭�� �ʱ�ȭ�Ѵ�. 
//		numlist[i] = i;
//	}
//
//	for (int i = 0; i < 10050; i++) { // �Ҽ��� �ƴ� ���� �����Ѵ�. 
//		if (numlist[i] == 0) //�̹� ������ ���� �н��Ѵ� 
//			continue;
//		for (int j = i + i; j <= usermax; j += i) // i �� ����� �����Ѵ�.
//			numlist[j] = 0;
//	}
//
//	for (int i = 0; i < 10050; i++) { // �Ҽ��� ���� ���� ���ϰ� �ּҰ��� ���Ѵ�. 
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

//// �⺻���� �Ҽ� Ȯ�� ��� 
//// O(n)�� �ð����⵵�� ����. 
//#include <stdio.h>
//#include <stdbool.h>
//
//bool isPrimeNumber(int x) { // �Ҽ� �Ǻ� �Լ� 
//	for (int i = 2; i < x; i++) { // 2���� ������ n-1���� 
//		if (x % i == 0) // ����� �߰ߵȴٸ� 
//			return false;
//	}
//	return true;
//}
//
//int main() {
//	printf("%d\n", isPrimeNumber(100)); // 100�� �Ҽ��ΰ�? -> 0(�ƴϿ�) 
//	printf("%d", isPrimeNumber(97));    // 97�� �Ҽ��ΰ�? -> 1(��)
//	return 0;
//}

//// �Ҽ��� ���ϴ� �� �ٸ� ��� 
//// O(N^(1/2))
//#include <stdio.h>
//#include <stdbool.h>
//#include <math.h>
//
//bool isPrimeNumber(int x) {
//	int end = (int)sqrt(x); // ������� Ȯ��
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

//�����佺�׳׽��� ü
//#include <stdio.h>
//
//int number = 100000;
//int a[100001];
//
//void primeNumberSieve() {
//	for (int i = 2; i <= number; i++) { //�迭 �ʱ�ȭ
//		a[i] = i;
//	}
//
//	for (int i = 2; i <= number; i++) { // �Ҽ��� �ƴ� ���� ����� 
//		if (a[i] == 0) // �̹� ������ ���ڸ� �� ������ ���� 
//			continue;
//		for (int j = i + i; j <= number; j += i) { // i�� ������� �����Ѵ� 
//			a[j] = 0;
//		}
//	}
//
//	for (int i = 2; i <= number; i++) { // �Ҽ��� ����Ѵ�. 
//		if (a[i] != 0) //�������� ���� ���ڸ� 
//			printf("%d ", a[i]); //���
//	}
//}
//
//int main() {
//	primeNumberSieve();
//}