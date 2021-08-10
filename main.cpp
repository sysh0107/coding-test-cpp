// 1009번 분산처리
#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main() {
	
	int inp[7], sum = 0;
	int min = 100;
	for(int i = 0; i < 7; i++){
		cin >> inp[i];
		if(inp[i] % 2 == 1){
			sum += inp[i];
			if(min > inp[i]){
				min = inp[i];
			}
		}
	}
	if(sum == 0){
		cout <<"-1";
	}
	else{
		cout << sum<<"\n"<<min;
	}
	

	return 0;
}