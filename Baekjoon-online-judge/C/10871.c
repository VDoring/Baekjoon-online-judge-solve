#include <stdio.h>
int main() {
	int len, limit;
	scanf("%d %d", &len, &limit);

	int temp;
	for (int i = 0; i < len; i++) {
		scanf("%d", &temp);
		if (temp < limit)
			printf("%d ", temp);
	}
}