//#include <stdio.h>
//
//int fibo(int n) {
//	if (n == 1) // ù��° ���ϰ��
//		return 0; // 0
//	else if (n == 2) // �ι�° ���ϰ��
//		return 1; // 1
//	else // �� �̻��� ���
//		return fibo(n - 1) + fibo(n - 2);
//}
//
//int main() {
//	int n;
//	scanf("%d", &n);
//	printf("%d", fibo(n+1));
//}

#include <stdio.h>

int fibo(int n) {
	if (n > 1)
		return fibo(n - 1) + fibo(n - 2);
	else
		return n;
}

int main() {
	int n;
	scanf("%d", &n);
	printf("%d", fibo(n));
}