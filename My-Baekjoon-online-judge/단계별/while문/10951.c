#include <stdio.h>
int main() {
	int first, second;
	while (scanf("%d %d", &first, &second) != EOF) {
		printf("%d\n", first + second);
	}
	return 0;
}