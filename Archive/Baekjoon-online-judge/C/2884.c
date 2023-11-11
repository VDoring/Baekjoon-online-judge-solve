#include <stdio.h>
int main() {
	int h, m;
	scanf("%d %d", &h, &m);

	//만약 m이 빼려는 값 45보다 작다면 -> h를 -1하고 m을 60 더한다.
	if (m - 45 < 0) {
		h -= 1;
		m += 60;
	}
	//만약 h가 0인데 -1을 해야하는경우 h에 24을 더한다.
	if (h < 0) {
		h += 24;
	}

	m -= 45;
	printf("%d %d", h, m);
}