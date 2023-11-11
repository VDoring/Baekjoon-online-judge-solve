#include <stdio.h>
int main()
{
	int score[5];
	int score_sum = 0;
	int score_average;

	for (int i = 0; i < 5; i++)
	{
		scanf("%d", &score[i]);

		if (score[i] < 40)
			score[i] = 40;
		score_sum += score[i];
	}
	score_average = score_sum / 5;

	printf("%d", score_average);

	return 0;
}