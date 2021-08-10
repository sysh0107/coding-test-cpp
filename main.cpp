// 2480번 주사위 세개
#include <iostream>
#include <string>
using namespace std;

int main() {
	
	int a, b, c = 0;
	int result = 0;
	
	cin >> a>>b>>c;

	if(a == b && a == c){
		result = 10000 + a * 1000;
	}
	else if(a == b || a == c){
		result = 1000 + a * 100;
	}
	else if(b == c){
		result = 1000 + b* 100;
	}
	else{
		if(a < b) a = b;
		if(a < c) a = c;
		result = a * 100;
	}

	cout << result;

	return 0;
}