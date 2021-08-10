#include <stdio.h>
int main() {
	int narr[5 + 1];
	int sum = 0;
	
	for (int i = 0; i < 5; i++) {
		scanf("%d", &narr[i]);
		narr[i] = narr[i] * narr[i];
		sum += narr[i];
	}

	printf("%d", sum %= 10);
}