// �ð��ʰ�
//#include <stdio.h>
//int main() {
//	int a, b, v;
//	int now_locate = 0, day = 0;
//
//	scanf("%d %d %d", &a, &b, &v);
//
//	while (1) {
//		now_locate += a;
//		day++;
//
//		if (now_locate >= v) {
//			printf("%d", day);
//			return 0;
//		}
//
//		now_locate -= b;
//	}
//}

// ���ͳ� ���� ����
#include <stdio.h>
int main() {
	int a, b, v;
	int day;

	scanf("%d %d %d", &a, &b, &v);

	day = (v - b - 1) / (a - b) + 1;
	//���ļ���
	// �����̴� �Ϸ翡 a-b���;� �ö󰣴�.
	// �ٸ� ��ǥ ������ �����Ҷ��� b�� ���Խ�Ű�� �ʴ´�. �׷��Ƿ� v-b�� ���� ������ �ϼ��� �ȴ�.
	// (���ϸ��� �ö󰬴����� ����ϴ� Ư���� �� ���͸� �ö󰬰��� �ڼ��� �� �ʿ䰡 ����. �ϼ��� �˸� �ȴ�.)
	// 
	// ���� v-b�� a-b�� ����������� �ʴ´ٸ� +1�� �Ѵ�. (�Ϸ� �� �ɸ��ٴ� ��.)
	// ������ (v-b) / (a-b) + 1�� �ϸ� ����������� �ʴ� ��찡 ����⶧���� v-b�� -1�� �Ѵ�.

	printf("%d", day); // ���ϸ��� �����ߴ����� ����Ѵ�.
}