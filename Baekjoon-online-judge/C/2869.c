// 시간초과
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

// 인터넷 답지 참조
#include <stdio.h>
int main() {
	int a, b, v;
	int day;

	scanf("%d %d %d", &a, &b, &v);

	day = (v - b - 1) / (a - b) + 1;
	//수식설명
	// 달팽이는 하루에 a-b미터씩 올라간다.
	// 다만 목표 지점에 도달할때는 b를 포함시키지 않는다. 그러므로 v-b한 값이 도착한 일수가 된다.
	// (몇일만에 올라갔는지를 출력하는 특성상 몇 미터를 올라갔고는 자세히 알 필요가 없다. 일수만 알면 된다.)
	// 
	// 만약 v-b가 a-b로 나누어떨어지지 않는다면 +1을 한다. (하루 더 걸린다는 뜻.)
	// 하지만 (v-b) / (a-b) + 1로 하면 나누어떨어지지 않는 경우가 생기기때문에 v-b에 -1을 한다.

	printf("%d", day); // 몇일만에 도착했는지를 출력한다.
}