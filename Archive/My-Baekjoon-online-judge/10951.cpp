#include <iostream>
#include <cstdio>
using namespace std;
int main() {
	int num1, num2;

	while (scanf("%d%d", &num1, &num2) != EOF) {
		printf("%d\n", num1 + num2);
	}
	return 0;
}