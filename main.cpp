// 10162번 전자레인지
#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int main() {
	
	int five = 300;
	int one = 60;
	int ten = 10;

	int N = 0;
	cin >> N;

	if(N % 10 != 0)cout << -1;
	else{
		cout << N / five << ' ';
		cout << (N % five) / one << ' ';
		cout << (N % one) / ten;
	}
	
	return 0;
}