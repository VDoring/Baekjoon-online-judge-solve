////���� 1�� ��
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
//	//���� �Է�
//	scanf("%d", &input);
//	
//	// ó���Է°��� ���ϱ� ���� �������� ��
//	original_tens = input / 10;
//	original_units = input % 10;
//	
//	//��꿡 ���� �ڸ��� �� ����
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

//// ����!
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


//���ͳ� Ǯ��
#include <stdio.h> 

int main(void) {

    int a, b, c, d = -1, result, input, count = 0;

    scanf("%d", &input);
    result = input;

    while (d != result) {
        a = input / 10;
        b = input % 10; // �־��� ���� ���� ������ �ڸ� ��
        c = (a + b) % 10; // �տ��� ���� ���� ���� ������ �ڸ� ��
        d = (b * 10) + c; // ���ο� ��
        input = d;
        count++;
    }
    printf("%d", count);
}