//#include <stdio.h>
//int main() {
//	int non_selfnum[10001] = { 0, };
//
//	for (int i = 1; i < 10000; i++) {
//		// i가 한자리수일경우
//		if (i < 10) {
//			non_selfnum[i] = i + i;
//		}
//
//		// i가 두자리수일경우
//		else if(i >= 10 && i < 100) {
//			non_selfnum[i] = i + (i / 10 % 10) + (i % 10);
//		}
//
//		// i가 세자리수일경우
//		else if (i >= 100 && i < 1000) {
//			non_selfnum[i] = i + (i / 100 % 10) + (i / 10 % 10) + (i % 10);
//		}
//
//		// i가 네자리수일경우
//		else if(i >= 1000 && i < 10000){
//			non_selfnum[i] = i + (i / 1000 % 10) + (i / 100 % 10) + (i / 10 % 10) + (i % 10);
//		}
//	}
//
//	for (int i = 1; i < 10000; i++) {
//		printf("%d\n", non_selfnum[i]);
//	}
//}


#include <stdio.h>
int main() {
	char non_selfnum_list[10050] = { 0, }; // 셀프넘버 아닌 것을 1로 표기한다.

	for (int i = 1; i <= 10000; i++) {
		if (i <= 9) {
			non_selfnum_list[i + i]++; // 원본수 + 원본수
		}

		else if (i >= 10 && i <= 99) {
			non_selfnum_list[i + (i / 10) + (i % 10)]++; // 원본수 + 원본수-십의자리 + 원본수-일의자리
		}

		else if (i >= 100 && i <= 999) {
			non_selfnum_list[i + (i / 100) + (i / 10 % 10) + (i % 10)]++;
		}

		else if (i >= 1000 && i <= 9999) {
			non_selfnum_list[i + (i / 1000) + (i / 100 % 10) + (i / 10 % 10) + (i % 10)]++;
		}

		else {
			int temp = i + (i / 10000) + (i / 1000 % 10) + (i / 100 % 10) + (i / 10 % 10) + (i % 10);
			if(temp <= 10000)
				non_selfnum_list[temp]++;
		}
	}

	for (int i = 1; i <= 10000; i++) {
		if (non_selfnum_list[i] == 0)
			printf("%d\n", i);
	}
}

// 백준 다른사람 답안
#include <stdio.h>
int main() {
	int n[10040] = { 1 }, i = 9999;
	while (i--)
		n[i + i % 10 + (i / 10) % 10 + (i / 100) % 10 + (i / 1000) % 10]++;
	for (; i++ < 10001;)
		if (!n[i])printf("%d\n", i);
}