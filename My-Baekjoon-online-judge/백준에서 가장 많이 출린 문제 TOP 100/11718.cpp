#include <iostream>
#include <string>
using namespace std;
int main() {
	string text;
	for (;;) {
		getline(cin, text);
		if (text == "") break;
		cout << text << endl;
	}
}