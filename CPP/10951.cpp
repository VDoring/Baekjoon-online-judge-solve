#include <iostream>
using namespace std;
int main() {
	int a, b;
	while (cin >> a >> b) { //입력이 있으면 true, 입력이 없으면 false로 인식한다. 반복휫수가 정해져있지 않은 문제에서 쓸 수 있는 방법.
		cout << a + b << endl;
	}
	return 0;
}