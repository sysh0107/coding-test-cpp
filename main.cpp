// 10156번 과자
#include <iostream>
#include <string>
using namespace std;

int main() {
	
	int a, b, c = 0;
	int result = 0;
	
	cin >> a>>b>>c;

	result = a * b - c;

	if(result > 0){
		cout << result;
	}
	else {
		cout << 0;
	}

	return 0;
}