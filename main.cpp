// 5086번 배수와 약수
#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main() {
	
	while(1){
		int a, b = 0;

		cin >> a>>b;
		if(a == 0){
			break;
		}
		else if(a % b == 0){
			cout << "multiple\n";
		}
		else if(b % a == 0){
			cout << "factor\n";
		}
		else{
			cout << "neither\n";
		}
	}
	
	return 0;
}