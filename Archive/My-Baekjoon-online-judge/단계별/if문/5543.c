/*
�Է�: ���, �ߴ�, �ϴ�, �ݶ�, ���̴� ����
���: ���� ������ ��Ʈ(�ܹ���+����)�� ����
*/

/*
1. �ܹ���, ���� �� �Է¹���
2. ���+�ݶ�, ���+���̴� ���� ����
	�ߴ�...		�ϴ�...
3. �հ谡�� ��.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int set_sum[6] = { 0, }; //��Ʈ ���� ����
	int high_burger = 0, mid_burger = 0, low_burger = 0;
	int cola = 0, cider = 0;
	int lowest_set_price = 0;
	/*��Ʈ�� ������ ������ ���� ����
	int high_cola = 0, high_cider = 0;
	int mid_cola = 0, mid_cider = 0;
	int low_cola = 0, low_cider = 0;
	*/

	scanf("%d %d %d %d %d", &high_burger, &mid_burger, &low_burger, &cola, &cider);
	/* ���� �Է�
	scanf("%d", &high_burger);
	scanf("%d", &mid_burger);
	scanf("%d", &low_burger);
	scanf("%d", &cola);
	scanf("%d", &cider);
	*/

	/* 100�� �̻�, 2000���� Ȯ�� ����
	while (1) {
		if (high_burger >= 100 && high_burger <= 2000)
			if (mid_burger >= 100 && mid_burger <= 2000)
				if (low_burger >= 100 && low_burger <= 2000)
					if (cola >= 100 && cola <= 2000)
						if (cider >= 100 && cider <= 2000)
							break;
		return 0;
	}
	*/

	set_sum[0] = high_burger + cola + 0;
	set_sum[1] = high_burger + cider + 0;
	set_sum[2] = mid_burger + cola + 0;
	set_sum[3] = mid_burger + cider + 0;
	set_sum[4] = low_burger + cola + 0;
	set_sum[5] = low_burger + cider + 0;

	
	//���׿����� ��(�̰� ���� ū �� ���ϱ�)
	//0 < 1 ? (1 < 2 ? (2 < 3 ? (3 < 4 ? (4 < 5 ? 5 : 4) : (3 < 5 ? 5 : 3)) : (2 < 4 ? (3 < 5 ? 5 : 3) : (2 < 5 ? 5 : 2))) : (1 < 3 ? (2 < 4 ? (3 < 5 ? 5 : 3) : (2 < 5 ? 5 : 2)) : (1 < 4 ? (2 < 5 ? 5 : 2) : (1 < 5 ? 5 : 1)))) : (0 < 2 ? (1 < 3 ? (2 < 4 ? (3 < 5 ? 5 : 3) : (2 < 5 ? 5 : 2)) : (1 < 4 ? (2 < 5 ? 5 : 2) : (1 < 5 ? 5 : 1))) : (0 < 3 ? (1 < 4 ? (2 < 5 ? 5 : 2) : (1 < 5 ? 5 : 1)) : (0 < 4 ? (1 < 5 ? 5 : 1) : (0 < 5 ? 5 : 0))))

	lowest_set_price = set_sum[0] > set_sum[1] ? (set_sum[1] > set_sum[2] ? (set_sum[2] > set_sum[3] ? (set_sum[3] > set_sum[4] ? (set_sum[4] > set_sum[5] ? set_sum[5] : set_sum[4]) : (set_sum[3] > set_sum[5] ? set_sum[5] : set_sum[3])) : (set_sum[2] > set_sum[4] ? (set_sum[3] > set_sum[5] ? set_sum[5] : set_sum[3]) : (set_sum[2] > set_sum[5] ? set_sum[5] : set_sum[2]))) : (set_sum[1] > set_sum[3] ? (set_sum[2] > set_sum[4] ? (set_sum[3] > set_sum[5] ? set_sum[5] : set_sum[3]) : (set_sum[2] > set_sum[5] ? set_sum[5] : set_sum[2])) : (set_sum[1] > set_sum[4] ? (set_sum[2] > set_sum[5] ? set_sum[5] : set_sum[2]) : (set_sum[1] > set_sum[5] ? set_sum[5] : set_sum[1])))) : (set_sum[0] > set_sum[2] ? (set_sum[1] > set_sum[3] ? (set_sum[2] > set_sum[4] ? (set_sum[3] > set_sum[5] ? set_sum[5] : set_sum[3]) : (set_sum[2] > set_sum[5] ? set_sum[5] : set_sum[2])) : (set_sum[1] > set_sum[4] ? (set_sum[2] > set_sum[5] ? set_sum[5] : set_sum[2]) : (set_sum[1] > set_sum[5] ? set_sum[5] : set_sum[1]))) : (set_sum[0] > set_sum[3] ? (set_sum[1] > set_sum[4] ? (set_sum[2] > set_sum[5] ? set_sum[5] : set_sum[2]) : (set_sum[1] > set_sum[5] ? set_sum[5] : set_sum[1])) : (set_sum[0] > set_sum[4] ? (set_sum[1] > set_sum[5] ? set_sum[5] : set_sum[1]) : (set_sum[0] > set_sum[5] ? set_sum[5] : set_sum[0]))));

	printf("%d", lowest_set_price - 50);

	return 0;
}