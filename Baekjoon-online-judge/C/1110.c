////예제 1만 됨
//#include <stdio.h>
//
//int main() {
//	int input;
//	int original_tens, original_units;
//	int tens, units;
//	int res = 0, res2 = 0;
//	int res_unit1 = 0, res_unit2 = 0;
//	int count = 0;
//
//	//유저 입력
//	scanf("%d", &input);
//	
//	// 처음입력값과 비교하기 위한 오리지널 값
//	original_tens = input / 10;
//	original_units = input % 10;
//	
//	//계산에 사용될 자릿수 값 저장
//	tens = original_tens;
//	units = original_units;
//
//	count++;
//	res = tens + units;
//	if (res > 9) {
//		res_unit1 = res % 10;
//	}
//
//	count++;
//	res2 = units + res;
//	if (res2 > 9) {
//		res_unit1 = res2 % 10;
//	}
//
//	count++;
//	res2 = res + res_unit1;
//	if (res2 > 9) {
//		res_unit2 = res2 % 10;
//	}
//
//	count++;
//	res2 = res_unit1 + res_unit2;
//	if (res_unit2 == original_tens && res2 == original_units) {
//		printf("%d", count);
//		return 0;
//	}
//
//}

//// 성공!
//#include <stdio.h>
//int main() {
//	int input;
//	int count = 0;
//	int original_tens, original_units;
//	int tens, units, res;
//
//	scanf("%d", &input);
//
//	if (input <= 9 && input != 0) {
//		input = input * 10;
//	}
//
//	original_tens = input / 10;
//	original_units = input % 10;
//	tens = original_tens;
//	units = original_units;
//
//	do {
//		res = tens + units;
//		if (res > 9) {
//			res = res % 10;
//		}
//
//		tens = units;
//		units = res;
//		count++;
//	} while (!(original_tens == tens && original_units == units));
//	
//	printf("%d", count);
//}


//인터넷 풀이
#include <stdio.h> 

int main(void) {

    int a, b, c, d = -1, result, input, count = 0;

    scanf("%d", &input);
    result = input;

    while (d != result) {
        a = input / 10;
        b = input % 10; // 주어진 수의 가장 오른쪽 자리 수
        c = (a + b) % 10; // 앞에서 구한 합의 가장 오른쪽 자리 수
        d = (b * 10) + c; // 새로운 수
        input = d;
        count++;
    }
    printf("%d", count);
}