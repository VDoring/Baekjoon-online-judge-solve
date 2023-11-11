#include <stdio.h>

int main() {
	int count;
	
	scanf("%d", &count); //반복할 값을 입력받는다. 
	
	int scoreList[count]; 
	int scoreMax = -1;
	for(int i = 0; i < count; i++) { // 각 과목의 점수를 입력받는다. 이때 최고 점수가 무엇인지도 저장한다. 
		scanf("%d", &scoreList[i]);
		if(scoreMax < scoreList[i]) {
			scoreMax = scoreList[i];
		}
	}
	
	double modifiedScoreList[count];
	double scoreAverage = 0;
	for(int i = 0; i < count; i++) { // 점수를 조작하여 배열에 저장한다. 
		modifiedScoreList[i] = (double)scoreList[i] / scoreMax * 100;
		scoreAverage += modifiedScoreList[i];
	}
	scoreAverage = scoreAverage / count; // 평균을 구한다. 
	
	printf("%f", scoreAverage);
}
