// 성공!
//#include <stdio.h>
//int main() {
//	int n;
//	int stu_num, stu_score[1000] = { 0, };
//	int stu_score_sum = 0, stu_score_average;
//	int stu_score_average_up_count = 0; //평균 넘은 학생 수
//	float stu_score_person_percent; //한명 당 몇 퍼센트인지 저장
//	float stu_score_average_up_percent; //전체 중 평균 넘은 학생의 퍼센트
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


// 다른 사람의 코드
#include <stdio.h>

int main(void) {
	int num, N; // num은 테스트 케이스입니다. N은 학생의 수입니다.

	scanf("%d", &num); // 테스트 케이스를 입력 받습니다.

	while (num--) { // while문 num이 0이 될 때까지 (false가 될 때까지) 반복합니다.
		scanf("%d", &N); // 우선 N을 입력받고, 점수 score[N]을 선언했습니다.
		int score[1000], sum = 0, high = 0; // 점수의 합 sum과 평균보다 높은 사람의 수를 세기 위한 high를 선언했습니다.
		double avg = 0; // 평균 avg는 N으로 나눌 때 소수점으로 나오기 때문에 간섭을 받지 않기 위해 double로 선언합니다.
		for (int i = 0; i < N; i++) { // 학생들의 점수를 받고, sum에 다 더해줍니다.
			scanf("%d", score + i);
			sum += score[i];
		}
		avg = (double)sum / N; // 합을 학생 수로 나누어 평균을 구합니다.
		for (int i = 0; i < N; i++)
			if (score[i] > avg)
				high++; // 점수가 평균보다 높을 경우, 카운트해줍니다.
		printf("%.3lf%%\n", (double)high * 100 / N); // 평균보다 높은 학생의 비율을 출력합니다.
	}
}