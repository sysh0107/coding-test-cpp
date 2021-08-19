// 2941번 크로아티아 알파벳
// 10996번 별 찍기 - 21
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {

	int N = 0;
	cin >> N;

	for(int i = 0; i < N * 2; i++){
		for(int j = 0; j < N; j++){
			if(j % 2 == 0 && i% 2 == 0)cout << '*';
			else if(j % 2 == 1 && i% 2 == 0)cout << ' ';
			else if(j % 2 == 0 && i% 2 == 1)cout << ' ';
			else if(j % 2 == 1 && i% 2 == 1)cout << '*';
		}
		cout << '\n';
	}
	
	return 0;
}
// 1373번 2진수 8진수