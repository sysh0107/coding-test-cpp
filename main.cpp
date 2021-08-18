// 10820번 문자열 분석
#include <iostream>
#include <string>
using namespace std;

int main() {

	string str;

	while(getline(cin, str)){
		int lower = 0, upper = 0, num = 0, space = 0;

		for(int i = 0; i < str.size(); i++){
			if(islower(str[i]))lower += 1;
			else if(isupper(str[i]))upper += 1;
			else if(isdigit(str[i]))num += 1;
			else if(isspace(str[i]))space += 1;
		}
		cout << lower<<' '<<upper<<' '<<num<<' '<<space<<'\n';
	}
	
	return 0;
}