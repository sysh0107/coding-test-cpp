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

// 1076번 저항
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int result = 0;

void value(string str){
	if(str == "black"){
		result *= 10;
		result += 0;
	}
	else if(str == "brown"){
		result *= 10;
		result += 1;
	}
	else if(str == "red"){
		result *= 10;
		result += 2;
	}
	else if(str == "orange"){
		result *= 10;
		result += 3;
	}
	else if(str == "yellow"){
		result *= 10;
		result += 4;
	}
	else if(str == "green"){
		result *= 10;
		result += 5;
	}
	else if(str == "blue"){
		result *= 10;
		result += 6;
	}
	else if(str == "violet"){
		result *= 10;
		result += 7;
	}
	else if(str == "grey"){
		result *= 10;
		result += 8;
	}
	else if(str == "white"){
		result *= 10;
		result += 9;
	}

}
void multiple(string str){
	if(str == "black"){
		cout << "";
	}
	else if(str == "brown"){
		cout << "0";
	}
	else if(str == "red"){
		cout << "00";
	}
	else if(str == "orange"){
		cout << "000";
	}
	else if(str == "yellow"){
		cout << "0000";
	}
	else if(str == "green"){
		cout << "00000";
	}
	else if(str == "blue"){
		cout << "000000";
	}
	else if(str == "violet"){
		cout << "0000000";
	}
	else if(str == "grey"){
		cout << "00000000";
	}
	else if(str == "white"){
		cout << "000000000";
	}
}

int main() {

	string str1, str2, str3;
	cin >> str1 >> str2 >> str3;
	value(str1);
	value(str2);
	if(result == 0){
		cout << "0";
	}
	else{
		cout << result;
		multiple(str3);
	}
	

	return 0;
}
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