#include <stdio.h>
int main() {
	int input;
	scanf("%d", &input);

	int i, j;
	for (i = 0; i < input; i++) {
		for (j = 0; j < i; j++) {
			printf(" ");
		}
		for (j = input; j > i; j--) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}

/*

*****
 ****
  ***
   **
	*

*/