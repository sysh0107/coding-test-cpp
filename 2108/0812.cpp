// 2875번 대회 or 인턴
#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int main() {
	
	int a, b, c, cnt = 0;
	cin >> a>>b>>c;

	while(a + b - c >= 3 && a >= 2 && b >= 1){
		a -= 2;
		b -= 1;
		cnt += 1;
	}
	cout << cnt;

	return 0;
}