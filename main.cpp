// 2530번 인공지능 시계
#include <iostream>
#include <string>
using namespace std;

int main() {
	
	int a, b, c = 0;
	int time = 0;
	int need_time;
	int r_a, r_b, r_c = 0;
	
	cin >> a>>b>>c;
	cin >> need_time;

	time = a * 3600 + b * 60 + c + need_time;
	r_a = time / 3600;
	r_a %= 24;
	r_b = time % 3600 / 60;
	r_c = time % 60;

	cout << r_a<<' '<<r_b<<' '<<r_c;

	return 0;
}