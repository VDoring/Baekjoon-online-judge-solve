#include <stdio.h>

int main() {
	int count;
	
	scanf("%d", &count); //�ݺ��� ���� �Է¹޴´�. 
	
	int scoreList[count]; 
	int scoreMax = -1;
	for(int i = 0; i < count; i++) { // �� ������ ������ �Է¹޴´�. �̶� �ְ� ������ ���������� �����Ѵ�. 
		scanf("%d", &scoreList[i]);
		if(scoreMax < scoreList[i]) {
			scoreMax = scoreList[i];
		}
	}
	
	double modifiedScoreList[count];
	double scoreAverage = 0;
	for(int i = 0; i < count; i++) { // ������ �����Ͽ� �迭�� �����Ѵ�. 
		modifiedScoreList[i] = (double)scoreList[i] / scoreMax * 100;
		scoreAverage += modifiedScoreList[i];
	}
	scoreAverage = scoreAverage / count; // ����� ���Ѵ�. 
	
	printf("%f", scoreAverage);
}
