#include <iostream>
#include <cstdio>
using namespace std;

int main() {
	int totalnum;
	int num1, num2;

	scanf("%d", &totalnum);
	while (totalnum--) {
		scanf("%d,%d", &num1, &num2);
		printf("%d\n", num1+num2);
	}
	return 0;
}