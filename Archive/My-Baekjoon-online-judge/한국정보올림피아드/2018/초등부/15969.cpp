#include <iostream>

using namespace std;

int main() {
	int studentCount;
	int studentScore;
	int max = -1;
	int min = 1001;
	int ans = 0;
	
	cin >> studentCount;
	
	for(int i = 0; i < studentCount; i++) {
		cin >> studentScore;
		if(studentScore > max)
			max = studentScore;
		if(studentScore < min)
			min = studentScore;
	}
	
	ans = max - min;
	
	cout << ans;
	
	return 0;
}

