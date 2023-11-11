#include <iostream>
#include <cstdio>
int main() {
	int n1, n2;

	while (1) {
		scanf("%d%d", &n1, &n2);
		if (n1 == 0 && n2 == 0) return 0;
		printf("%d\n", n1 + n2);
	}
}