// 10991번 별 찍기 - 16
#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int main() {
	
	int N = 0;
	cin >> N;

	for(int i = 0; i < N; i++){
		for(int j = N - i - 1; j > 0; j--){
			cout << ' ';
		}
		for(int k = 0; k < i * 2 + 1; k++){
			if(k % 2 == 0){
				cout << '*';
			}
			else{
				cout << ' ';
			}
		}

		cout << '\n';
	}
	
	return 0;
}