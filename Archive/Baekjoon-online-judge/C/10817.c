#include <stdio.h>
int main() {
	int n[4];
	int min = 999, max = -999;
	int min_locate, mid_locate, max_locate;
	
	scanf("%d %d %d", &n[0], &n[1], &n[2]);

	for (int i = 0; i < 3; i++) { // �ִ밪, �ּҰ� ã��
		if (min > n[i]) {
			min = n[i];
			min_locate = i;
		}
		if (max < n[i]) {
			max = n[i];
			max_locate = i;
		}
	}

	for (int i = 0; i < 3; i++) { // �ִ밪, �ּҰ��� ����� ��ġ�� �������� �߰����� ����� ��ġ�� ����
		if (i == min_locate || i == max_locate)
			continue;
		mid_locate = i;
	}

	if (n[0] == n[1] || n[1] == n[2]) // ���� ���� �κ��� ���� ��쿡 ���� ó��
		printf("%d", n[1]);
	else if (n[2] == n[0])
		printf("%d", n[2]);
	else
		printf("%d", n[mid_locate]);

}