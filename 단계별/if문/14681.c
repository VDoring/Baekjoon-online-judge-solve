#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int x, y;
	scanf("%d", &x);
	scanf("%d", &y);

	//x,y ��� ��� = Quadrant 1
	if (x > 0 && y > 0)
		printf("1");

	//x�� ����, y�� ��� = Quadrant 2
	else if (x < 0 && y > 0)
		printf("2");

	//x,y ��� ���� = Quadrant 3
	else if (x < 0 && y < 0)
		printf("3");

	//x�� ���, y�� ���� = Quadrant 4
	else if (x > 0 && y < 0)
		printf("4");

	return 0;
}