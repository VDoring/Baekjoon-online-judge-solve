#include <stdio.h>
int main() {
	int testcase;
	int studentNum; //학생 수
	int studentScore[1000 + 1]; //점수 저장
	float avg = 0; //평균점수
	int avgPlusCount = 0; //평균 이상의 점수를 받은 학생의 수
	float oneStudentPersent; //학생 한명이 가지는 퍼센트
	float avgPlusPersent; //평균 이상의 점수를 받은 학생의 비율

	scanf("%d", &testcase);
	for (int i = 0; i < testcase; i++) {
		scanf("%d", &studentNum);
		for (int j = 0; j < studentNum; j++) {
			scanf("%d", &studentScore[j]);
			avg += studentScore[j];
		}
		avg = avg / (float)studentNum;
		
		for (int j = 0; j < studentNum; j++) {
			if (studentScore[j] > avg) {
				++avgPlusCount;
			}
		}
		oneStudentPersent = 100 / (float)studentNum;
		avgPlusPersent = oneStudentPersent * avgPlusCount;

		printf("%.3f%\n", avgPlusPersent);

		avg = 0, avgPlusCount = 0, oneStudentPersent = 0;
	}
	return 0;
}
