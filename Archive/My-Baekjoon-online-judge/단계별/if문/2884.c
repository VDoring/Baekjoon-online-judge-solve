#include <stdio.h>
int main()
{
	int hour, minute;

	scanf("%d %d", &hour, &minute);

	minute = minute - 45;
	if (minute < 0)
	{
		hour--;
		minute = minute + 60;
		if (hour < 0)
			hour = hour + 24;
	}
	printf("%d %d", hour, minute);

	return 0;
}