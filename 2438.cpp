#include <iostream>
using namespace std;
int main() {
	int in;
	scanf("%d", &in);

	for (int i = 0; i < in; i++) {
		for (int j = 0; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}

	return 0;
}