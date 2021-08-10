// 2420번 사파리월드
#include <iostream>
#include <string>
using namespace std;

int main() {
	
	long long a, b = 0;
	long result = 0;
	
	cin >> a>>b;

	result = a - b;

	if(result > 0) cout << result;
	else cout << -result;

	return 0;
}