// 2010번 플러그
#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main() {
	
	int N = 0;
	int result = 0;
	cin >> N;

	for(int i = 0; i < N; i++){
		int a;
		cin >> a;

		result = result + a - 1;

	}
	cout << result + 1;
	return 0;
}
