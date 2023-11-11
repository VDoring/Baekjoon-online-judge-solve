#include <stdio.h>
#include <stdlib.h>
int main() {
	int cnt;
	int *score;
	float *avr_score;
	int max_score = 0;
	float sum_avr_score = 0;

	scanf("%d", &cnt);

	score = malloc(sizeof(int)*cnt);
	avr_score = malloc(sizeof(float)*cnt);

	for (int i = 0; i < cnt; i++) {
		scanf("%d", &score[i]);
	}

	for (int i = 0; i < cnt; i++) {
		if (score[i] > max_score)
			max_score = score[i];
	}

	for (int i = 0; i < cnt; i++) {
		avr_score[i] = (float)score[i] / max_score * 100;
	}

	for (int i = 0; i < cnt; i++) {
		sum_avr_score += avr_score[i];
	}

	sum_avr_score /= cnt;

	printf("%.5f", sum_avr_score);

	free(score);
	free(avr_score);

	return 0;
}

//���ϴ� ���
/*
40��, 80��, 60���϶�

40�� ���: 40 / 80 * 100 = 50��
80�� ���: 80 / 80 * 100 = 100��
60�� ���: 60 / 80 * 100 = 75��

(50+100+75) / 2 = 75��
*/