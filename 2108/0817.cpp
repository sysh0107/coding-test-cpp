// 2953번 나는 요리사다

// 5565번 영수증
#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int main() {
	
	int sum = 0;
	cin >> sum;
	int books[9];
	for(int i = 0; i < 9; i++){
		cin >> books[i];
		sum -= books[i];
	}
	cout << sum;

	return 0;
}