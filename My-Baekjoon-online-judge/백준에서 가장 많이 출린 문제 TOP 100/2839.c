/* �۵� �ȵ� */

#include <stdio.h>
int main() {
	int Kg; //�Űܾ� �� ��
	int bag_3 = 3, bag_5 = 5; //��Һ��� 3Kg, 5Kg
	int bag_3_count = 0, bag_5_count = 0, bag_count_sum = 0; //3kg, 5kg ��Һ��� �ű� �ܼ�, �� �ű� �ܼ�

	scanf("%d", &Kg);

	while (1) {
		if (Kg % 5 >= 3) { //5Kg ��Һ����� ������ 3kg��Һ����� ����� �� ������
			while (1) {
				if (Kg % 5 == 0) break;
				if (Kg % 3 == 0 && Kg % 5 < 3) break;
				if (Kg % 5 != 0 && Kg % 3 != 0) break;
				while (Kg > 5) { //5Kg ��Һ����� �ִ��� ����
					Kg = Kg - bag_5;
					bag_5_count++;
				}
				if (Kg % 3 == 0 || Kg >= 3) { //�������� 3kg ��Һ����� ����(�� �����ִ� �� ���� 3kg�����ϰ�� �۵��ȵ�)
					while (Kg != 0) {
						Kg = Kg - bag_3;
						bag_3_count++;
					}
					break;
				}
			}
		}

		if (Kg % 5 == 0) { //5Kg ��Һ����� �ѹ��� ó���� �� ������
			while (Kg != 0) {
				Kg = Kg - bag_5;
				bag_5_count++;
			}
		}
		if (Kg % 3 == 0) { //3Kg ��Һ����� �ѹ��� ó���� �� ������
			while (Kg != 0) {
				Kg = Kg - bag_3;
				bag_3_count++;
			}
		}

		if (Kg >= 5) { //5Kg ��Һ����� ����� �� ������
			Kg = Kg - bag_5;
			bag_5_count++;
		}
		else if (Kg >= 3) { //3Kg ��Һ����� ����� �� ������
			Kg = Kg - bag_3;
			bag_3_count++;
		}
		else if (Kg < 3 && Kg != 0) { //�� ������ ��������
			printf("-1");
			return 0;
		}
		else break;
	}
	bag_count_sum = bag_5_count + bag_3_count; //��Һ��� �� �ű��ܼ�
	printf("%d", bag_count_sum);

	return 0;
}