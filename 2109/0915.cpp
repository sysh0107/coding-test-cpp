// 1373번 2진수 8진수
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	ios_base :: sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	
	string num;
	cin >> num;

	if(num == "0"){
	    cout << '0';
	    return 0;
	}

	if(num.length() % 3 == 1){
		cout << num[0] - '0';
	}
	else if(num.length() % 3 == 2){
		cout << (num[0] - '0') * 2 + num[1] - '0';
	}

	for(int i = num.length() % 3; i < num.length(); i += 3){

		cout << (num[i] - '0') * 4 + (num[i + 1] - '0') * 2 + num[i + 2] - '0';
	}
	
	return 0;
}