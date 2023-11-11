#include <stdio.h>
int main() {
	int dot_xy[5][2];
	int a, b;
	int x, y;
	
	for (int i = 0; i < 3; i++) {
		scanf("%d %d", &a, &b);
		dot_xy[i][0] = a;
		dot_xy[i][1] = b;
	}

	
	for (int i = 0; i < 2; i++) {
		if (dot_xy[0][i] == dot_xy[1][i])
			dot_xy[3][i] = dot_xy[2][i];
		else if (dot_xy[1][i] == dot_xy[2][i])
			dot_xy[3][i] = dot_xy[0][i];
		else
			dot_xy[3][i] = dot_xy[1][i];
	}

	printf("%d %d", dot_xy[3][0], dot_xy[3][1]);

}