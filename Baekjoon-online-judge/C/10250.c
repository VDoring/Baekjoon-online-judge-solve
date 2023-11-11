#include <stdio.h>
int main() {
	int T, H, W, N;
	int cnt;

	scanf("%d", &T);

	for (int n = 0; n < T; n++) {
		cnt = 0;
		scanf("%d %d %d", &H, &W, &N);
		int arr[H][W];

		for (int i = 0; i < W; i++) {
			for (int j = H - 1; j >= 0; j--) {
				arr[j][i] = (H * 100 - j * 100) + (i + 1);
				cnt++;
				if (cnt == N) {
					printf("%d\n", arr[j][i]);
					break;
				}
			}
		}
	}


}