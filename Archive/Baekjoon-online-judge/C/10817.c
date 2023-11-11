#include <stdio.h>
int main() {
	int n[4];
	int min = 999, max = -999;
	int min_locate, mid_locate, max_locate;
	
	scanf("%d %d %d", &n[0], &n[1], &n[2]);

	for (int i = 0; i < 3; i++) { // 최대값, 최소값 찾기
		if (min > n[i]) {
			min = n[i];
			min_locate = i;
		}
		if (max < n[i]) {
			max = n[i];
			max_locate = i;
		}
	}

	for (int i = 0; i < 3; i++) { // 최대값, 최소값이 저장된 위치를 바탕으로 중간값이 저장된 위치를 추측
		if (i == min_locate || i == max_locate)
			continue;
		mid_locate = i;
	}

	if (n[0] == n[1] || n[1] == n[2]) // 값이 같은 부분이 있을 경우에 관한 처리
		printf("%d", n[1]);
	else if (n[2] == n[0])
		printf("%d", n[2]);
	else
		printf("%d", n[mid_locate]);

}