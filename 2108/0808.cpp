// 2525번 오븐 시계
#include <iostream>
#include <string>
using namespace std;

int main() {

	int now_h, now_m, need, min = 0;
	int result_h, result_m = 0;

	cin >> now_h >> now_m;
	cin >> need;

	min = now_h * 60 + now_m;
	min += need;

	result_h = min / 60;
	result_m = min % 60;

	if (result_h > 23){
		result_h -= 24;
	}

	cout << result_h <<' ' << result_m;

	return 0;
}