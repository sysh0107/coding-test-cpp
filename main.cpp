// 2845번 파티가 끝나고 난 뒤
#include <iostream>
using namespace std;

int main() {
	int L, P;
	int p1, p2, p3, p4, p5;
	cin >> L >> P;
	cin >> p1 >> p2 >> p3 >> p4 >> p5;

	int num;
	num = L * P;
	cout << p1 - num << ' ';
	cout << p2 - num << ' ';
	cout << p3 - num << ' ';
	cout << p4 - num << ' ';
	cout << p5 - num;

	return 0;
}