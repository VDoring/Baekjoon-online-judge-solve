#include <stdio.h>
#include <stdlib.h>

int main() {
	int n; //���� ����
	int in_num; //���ڿ�ҵ�
	int min_num = 1000001, max_num = -1000001; //�ּҰ�, �ִ밪
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