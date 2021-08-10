// 10824번 네 수
#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main() {
	
	int a, b, c, d = 0;
	long long result = 0;
	
	cin >> a>>b>>c>>d;

	string str1 = to_string(a) + to_string(b);
	string str2 = to_string(c) + to_string(d);

	result = stoll(str1) + stoll(str2);

	cout << result;

	return 0;
}