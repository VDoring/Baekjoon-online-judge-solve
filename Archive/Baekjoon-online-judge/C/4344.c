// ����!
//#include <stdio.h>
//int main() {
//	int n;
//	int stu_num, stu_score[1000] = { 0, };
//	int stu_score_sum = 0, stu_score_average;
//	int stu_score_average_up_count = 0; //��� ���� �л� ��
//	float stu_score_person_percent; //�Ѹ� �� �� �ۼ�Ʈ���� ����
//	float stu_score_average_up_percent; //��ü �� ��� ���� �л��� �ۼ�Ʈ
//
//	scanf("%d", &n);
//	
//	for (int i = 0; i < n; i++) {
//		scanf("%d", &stu_num);
//
//		for (int j = 0; j < stu_num; j++) {
//			scanf(" %d", &stu_score[j]);
//			stu_score_sum += stu_score[j];
//		}
//
//		stu_score_average = stu_score_sum / stu_num;
//
//		for (int k = 0; k < stu_num; k++) {
//			if (stu_score_average < stu_score[k]) {
//				stu_score_average_up_count++;
//			}
//		}
//		
//		stu_score_person_percent = (float)100 / stu_num;
//		stu_score_average_up_percent = stu_score_person_percent * stu_score_average_up_count;
//
//		printf("%.3f%%\n", stu_score_average_up_percent);
//
//		stu_score_sum = 0, stu_score_average_up_count = 0;
//	}
//}


// �ٸ� ����� �ڵ�
#include <stdio.h>

int main(void) {
	int num, N; // num�� �׽�Ʈ ���̽��Դϴ�. N�� �л��� ���Դϴ�.

	scanf("%d", &num); // �׽�Ʈ ���̽��� �Է� �޽��ϴ�.

	while (num--) { // while�� num�� 0�� �� ������ (false�� �� ������) �ݺ��մϴ�.
		scanf("%d", &N); // �켱 N�� �Է¹ް�, ���� score[N]�� �����߽��ϴ�.
		int score[1000], sum = 0, high = 0; // ������ �� sum�� ��պ��� ���� ����� ���� ���� ���� high�� �����߽��ϴ�.
		double avg = 0; // ��� avg�� N���� ���� �� �Ҽ������� ������ ������ ������ ���� �ʱ� ���� double�� �����մϴ�.
		for (int i = 0; i < N; i++) { // �л����� ������ �ް�, sum�� �� �����ݴϴ�.
			scanf("%d", score + i);
			sum += score[i];
		}
		avg = (double)sum / N; // ���� �л� ���� ������ ����� ���մϴ�.
		for (int i = 0; i < N; i++)
			if (score[i] > avg)
				high++; // ������ ��պ��� ���� ���, ī��Ʈ���ݴϴ�.
		printf("%.3lf%%\n", (double)high * 100 / N); // ��պ��� ���� �л��� ������ ����մϴ�.
	}
}