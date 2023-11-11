#include <iostream>
using namespace std;
int main() {
	int in;
	int i, j;
	scanf("%d", &in);

	for (i = 0; i < in; i++) {
		for (j = 0; j < in - (i+1); j++)
			printf(" ");
		for (j; j < in; j++)
			printf("*");
		printf("\n");
	}

	return 0;
}