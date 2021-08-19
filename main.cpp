// 11655번 ROT13
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {

	string str;
	getline(cin, str);

	for(int i = 0; i < str.size(); i++){
		if(str[i] >= 'A' && str[i] <= 'Z'){
			if(str[i] + 13 > 'Z'){
				str[i] = (str[i] + 13) % 'Z' + 'A' - 1;
			}else str[i] += 13;
		}
		else if(str[i] >= 'a' && str[i] <= 'z'){
			if(str[i] + 13 > 'z'){
				str[i] = (str[i] + 13) % 'z' + 'a' - 1;
			}else str[i] += 13;
		}
	}

	cout << str;

	return 0;
}