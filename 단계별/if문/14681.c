#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int x, y;
	scanf("%d", &x);
	scanf("%d", &y);

	//x,y 모두 양수 = Quadrant 1
	if (x > 0 && y > 0)
		printf("1");

	//x는 음수, y는 양수 = Quadrant 2
	else if (x < 0 && y > 0)
		printf("2");

	//x,y 모두 음수 = Quadrant 3
	else if (x < 0 && y < 0)
		printf("3");

	//x는 양수, y는 음수 = Quadrant 4
	else if (x > 0 && y < 0)
		printf("4");

	return 0;
}