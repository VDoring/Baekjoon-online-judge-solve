#include <stdio.h>

long long sum(int* a, int n) {
	long long numsum = 0;
	for (int i = 0; i < n; i++) {
		numsum += a[i];
	}
	return numsum;
}

int main() {
	int ar[4] = { 1,2,3 };
	sum(ar, 3);
}