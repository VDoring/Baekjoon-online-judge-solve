#include <stdio.h>
int main() {
	int user_month, user_days; //������ �Է��� �ް� �ϼ��� �޴� ����
	int total_days = 0; //�� �ϼ�(��+�� ���ļ�)
	char Monthlist[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 }; //�޸��� ������ ���������� ����

	scanf("%d %d", &user_month, &user_days); //������ ��, �� �Է�

	for (int i = 1; i < user_month; i++) { //������ �Է��� ���� ����ŭ �ݺ�.
											//Q. �� i�� 1�� ���۵ǳ���?
											//A. i�� 0���� �ϸ� 1�� 1���� ��쿡�� 1���� ��¥�� ��� ���ϰŵ��. ������ 2�� �̻����� ���� 1���� ���ڸ� ��� ���ϴ°� �±⶧���� i�� 0���� �ϸ� �ȵǿ�.

		total_days += Monthlist[i-1]; //�ش� ���� �ϼ��� total_days�� ����.
										//Q. �� Monthlist[i]�� �ƴ� Monthlist[i-1]�ΰ���?
										//A. ���� �ּ��� ���� �˰����� i�� 1�� �ʱ�ȭ�Ͽ���? �迭�� 0���� �����ϱ⶧���� �׳� i(1)�� �ְԵȴٸ� 2���޺��� �������� ������ ���̳ʽ� 1�� �־��ִ°Ŷ��ϴ�.
	}
	total_days += user_days; //������ �Է��� �ϼ��� total_days�� ����.

	switch (total_days % 7) { //�� �ϼ��� 7�� ���� ������. ���� ���� �ٶ� ������ ������.
	case 0:
		printf("SUN");
		break;
	case 1:
		printf("MON");
		break;
	case 2:
		printf("TUE");
		break;
	case 3:
		printf("WED");
		break;
	case 4:
		printf("THU");
		break;
	case 5:
		printf("FRI");
		break;
	case 6:
		printf("SAT");
		break;
	}
}