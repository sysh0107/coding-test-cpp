// 1292번 쉽게 푸는 문제

// 1789번 수들의 합
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	ios_base :: sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	unsigned long A = 0;
	cin >> A;

	unsigned long result = 0;
	int cnt = 0;

	for(int i = 1; i < 500000; i++){
		result = result + i;
		if(result > A){
			cnt = i;
			break;
		}
	}
	
	cout << cnt - 1;

	return 0;
}