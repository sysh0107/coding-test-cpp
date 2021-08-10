// 1009번 분산처리
#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main() {
	
	int T = 0;
	cin >> T;

	for(int i = 0; i < T; i++){
		
		int a, b = 0;
		int result = 1;
		cin >> a>>b;

		for(int j = 0; j < b; j++){
			result *= a;
			result %= 10;
			//cout << result<<"_";
		}
		if(result == 0){
			result = 10;
		}
		cout << result<<"\n";
	}

	return 0;
}