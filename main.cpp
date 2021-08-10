// 2522번 별 찍기 - 12
#include <iostream>
#include <string>
using namespace std;

int main() {
	
	int a = 0;
	cin >> a;

	for(int i = 0; i < a; i++){
		for(int j = 0; j < a-i-1; j++){ cout << " "; }

		for(int s = 0; s < i + 1; s++){ cout << "*"; }
		cout << endl;
	}
	for(int i = 0; i < a-1; i++){
		for(int s = 0; s < i + 1; s++){ cout << " "; }

		for(int j = 0; j < a-i-1; j++){ cout << "*"; }

		cout << endl;
	}

	return 0;
}