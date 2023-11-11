//#include <stdio.h>
//int main() {
//	int n;
//	int num;
//	int cnt = 0;
//	int i, j;
//
//	scanf("%d", &n);
//
//	for (i = 0; i < n; i++) {
//		scanf("%d", &num);
//
//		for (j = 2; j < num; j++) {
//			if (num % j == 1) {
//				cnt++;
//				break;
//			}
//		}
//	}
//
//	printf("%d", cnt);
//}

#include <stdio.h>
int main() {
	int n;
	int num;
	int cnt = 0;
	int i, j;

	scanf("%d", &n);

	for (i = 0; i < n; i++) {
		scanf("%d", &num);

		for (j = 2; j < num; j++) {
			if (num % j == 0)
				break;
		}

		if (num == j)
			cnt++;
	}

	printf("%d", cnt);
}