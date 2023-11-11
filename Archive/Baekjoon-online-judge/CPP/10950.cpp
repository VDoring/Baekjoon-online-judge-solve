#include <iostream>
using namespace std;
int main() {
	int numcnt; //추천 변수명은 n
	int a, b;
	cin >> numcnt;
	for (int i = 0; i < numcnt; i++) {
		cin >> a >> b;
		cout << a + b << endl;
	}
	return 0;
}