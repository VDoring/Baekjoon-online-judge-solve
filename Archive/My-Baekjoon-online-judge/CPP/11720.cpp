#include <bits/stdc++.h>
using namespace std;
int main() {
	int n;
	char num;
	int sum = 0;
	
	cin >> n;
	
	while(n--) {
		cin >> num;
		sum += num - '0';
	}
	
	cout << sum;
}

/*
//https://blockdmask.tistory.com/78
#include<iostream>
using namespace std;
 
int main(void){
    int n;
    char ch;
    int sum = 0;
    
    cin >> n;
    
    while(n--) {
        cin >> ch;
        sum += (ch - '0');
    }
    
    cout << sum;
    return 0;
}*/
