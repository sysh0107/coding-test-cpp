// 2501번 약수 구하기
#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main() {
	
	int a, b, cnt = 0;
	cin >> a>>b;
	
	for(int i = 1; i <= a; i++){
		
		if(a % i == 0){
			cnt++;
		}
		if(cnt == b){
			cout << i;
			return 0;
		}
	}
	cout << 0;
	
	return 0;
}