// 1373번 2진수 8진수
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {

	string s;
	cin >> s;

	int sz = s.size();
	if(sz % 3 == 1){
		cout << s[0];
	}
	else if(sz % 3 == 2){
		cout << (s[0] - '0') * 2 + (s[1] - '0');
	}
	for(int i = sz %3; i < sz; i += 3){
		cout
	}

	cout << bi;
	return 0;
}