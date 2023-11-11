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