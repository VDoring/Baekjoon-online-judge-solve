/* 첫번째 풀이 */
#include <stdio.h>
int main() {
	int user_find_num;
	int real_num_max;
	int stack_count = 1;

	scanf("%d", &user_find_num);

	if (user_find_num == 1) {
		printf("1");
		return 0;
	}

	for (real_num_max = 7; ; real_num_max += 6 * stack_count) {
		stack_count++;
		if (user_find_num <= real_num_max) {
			printf("%d", stack_count);
			return 0;
		}
	}
}


/* 개선된 버전 */
#include <stdio.h>
int main() {
	int find_num;
	int max_num = 1, cnt=1;

	scanf("%d", &find_num);

	while (find_num > max_num) {
		max_num += 6 * cnt;
		cnt++;
	}
	printf("%d", cnt);
}

/*for (max = 1; max <= 1000000000; max += 6) {
		if (user_find_num <= max) {
			printf("%d", stack_count);
			return 0;
		}
		stack_count++;
	}*/