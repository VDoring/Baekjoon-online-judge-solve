//#include <stdio.h>
//int main() {
//	int x, y, w, h;
//
//	scanf("%d %d %d %d", &x, &y, &w, &h);
//
//	if (w - x < h - y)
//		printf("%d", w - x);
//	else if (w - x > h - y)
//		printf("%d", h - y);
//	else {
//		if (x > y)
//			printf("%d", y);
//		else
//			printf("%d", x);
//	}
//}

#include <stdio.h>
int main() {
	int x, y, w, h;
	int low_distance = 9999;
	
	scanf("%d %d %d %d", &x, &y, &w, &h);

	if (low_distance > w - x)
		low_distance = w - x;

	if (low_distance > h - y)
		low_distance = h - y;

	if (low_distance > x)
		low_distance = x;

	if (low_distance > y)
		low_distance = y;

	printf("%d", low_distance);
}