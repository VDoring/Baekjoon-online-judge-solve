#include <stdio.h>
int main() {
	int testcase;
	int studentNum; //�л� ��
	int studentScore[1000 + 1]; //���� ����
	float avg = 0; //�������
	int avgPlusCount = 0; //��� �̻��� ������ ���� �л��� ��
	float oneStudentPersent; //�л� �Ѹ��� ������ �ۼ�Ʈ
	float avgPlusPersent; //��� �̻��� ������ ���� �л��� ����

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
