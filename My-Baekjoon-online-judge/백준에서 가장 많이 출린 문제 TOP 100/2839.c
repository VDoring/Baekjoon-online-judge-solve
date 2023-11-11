/* 작동 안됨 */

#include <stdio.h>
int main() {
	int Kg; //옮겨야 할 양
	int bag_3 = 3, bag_5 = 5; //비닐봉지 3Kg, 5Kg
	int bag_3_count = 0, bag_5_count = 0, bag_count_sum = 0; //3kg, 5kg 비닐봉지 옮긴 휫수, 총 옮긴 휫수

	scanf("%d", &Kg);

	while (1) {
		if (Kg % 5 >= 3) { //5Kg 비닐봉지로 나누고도 3kg비닐봉지를 사용할 수 있을때
			while (1) {
				if (Kg % 5 == 0) break;
				if (Kg % 3 == 0 && Kg % 5 < 3) break;
				if (Kg % 5 != 0 && Kg % 3 != 0) break;
				while (Kg > 5) { //5Kg 비닐봉지로 최대한 담음
					Kg = Kg - bag_5;
					bag_5_count++;
				}
				if (Kg % 3 == 0 || Kg >= 3) { //나머지는 3kg 비닐봉지로 담음(단 남아있는 짐 양이 3kg이하일경우 작동안됨)
					while (Kg != 0) {
						Kg = Kg - bag_3;
						bag_3_count++;
					}
					break;
				}
			}
		}

		if (Kg % 5 == 0) { //5Kg 비닐봉지로 한번에 처리할 수 있을때
			while (Kg != 0) {
				Kg = Kg - bag_5;
				bag_5_count++;
			}
		}
		if (Kg % 3 == 0) { //3Kg 비닐봉지로 한번에 처리할 수 있을때
			while (Kg != 0) {
				Kg = Kg - bag_3;
				bag_3_count++;
			}
		}

		if (Kg >= 5) { //5Kg 비닐봉지를 사용할 수 있을때
			Kg = Kg - bag_5;
			bag_5_count++;
		}
		else if (Kg >= 3) { //3Kg 비닐봉지를 사용할 수 있을때
			Kg = Kg - bag_3;
			bag_3_count++;
		}
		else if (Kg < 3 && Kg != 0) { //안 나누어 떨어질때
			printf("-1");
			return 0;
		}
		else break;
	}
	bag_count_sum = bag_5_count + bag_3_count; //비닐봉지 총 옮긴휫수
	printf("%d", bag_count_sum);

	return 0;
}