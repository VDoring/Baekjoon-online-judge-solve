#include <stdio.h>
int main() {
	int count, sum = 0; //���� ������ ����, ���� �հ�
	char arr[100] = { 0, }; //���� ���ڸ� �������ϴ� �迭

	scanf("%d", &count);
	scanf("%s", arr);

	for (int i = 0; i < count; i++) {
		sum += arr[i] - '0'; //ASCII���� ������ ���� '0'�� �����Ƿν� �����ν� ���ǰ� �Ͽ���
	}
	printf("%d", sum);
}