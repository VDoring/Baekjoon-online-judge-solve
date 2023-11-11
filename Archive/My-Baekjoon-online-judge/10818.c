#include <stdio.h>
#include <stdlib.h>

int main() {
	int n; //숫자 개수
	int in_num; //숫자요소들
	int min_num = 1000001, max_num = -1000001; //최소값, 최대값
	int *ar;

	scanf("%d", &n);
	
	ar = malloc(sizeof(int) * n);

	for (int i = 0; i < n; i++) {
		scanf("%d", &ar[i]);
	}

	for (int i = 0; i < n; i++) {
		if (max_num < ar[i])
			max_num = ar[i];
		if (min_num > ar[i])
			min_num = ar[i];
	}

	printf("%d %d", min_num, max_num);

	free(ar);


	return 0;
}