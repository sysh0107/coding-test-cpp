// 1373번 2진수 8진수

// 1212번 8진수 2진수
#include <iostream>
#include <string>
using namespace std;

int main() {
	
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	string eight;
	cin >> eight;
	int len = eight.size();

	if(eight[0] == '0')cout << "0";
	else if(eight[0] == '1')cout << "1";
	else if(eight[0] == '2')cout << "10";
	else if(eight[0] == '3')cout << "11";
	else if(eight[0] == '4')cout << "100";
	else if(eight[0] == '5')cout << "101";
	else if(eight[0] == '6')cout << "110";
	else if(eight[0] == '7')cout << "111";

	for(int i = 1; i < len; i++){
		if(eight[i] == '0')cout << "000";
		else if(eight[i] == '1')cout << "001";
		else if(eight[i] == '2')cout << "010";
		else if(eight[i] == '3')cout << "011";
		else if(eight[i] == '4')cout << "100";
		else if(eight[i] == '5')cout << "101";
		else if(eight[i] == '6')cout << "110";
		else if(eight[i] == '7')cout << "111";
	}

	
	return 0;
}

// 2953번 나는 요리사다
#include <iostream>
#include <string>
using namespace std;

int main() {
	
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int score[5][4];
	int winner, winner_score = 0;
	int store = 0;

	for(int i = 0; i < 5; i++){
		int store = 0;
		for(int j = 0; j < 4; j++){
			cin >> score[i][j];
			store += score[i][j];
		}
		if(store > winner_score){
			winner = i + 1;
			winner_score = store;
		}
	}
	cout << winner <<' '<< winner_score;
	
	return 0;
}

// 7567번 그릇
#include <iostream>
#include <string>
using namespace std;

int main() {
	
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	string bowls;
	cin >> bowls;

	int result = 10;

	for(int i = 1; i < bowls.size(); i++){
		if(bowls[i] != bowls[i - 1])result += 10;
		else result += 5;
	}
	cout << result;
	
	return 0;
}

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
// 1076번 저항

// 2902번 KMP는 왜 KMP일까?
#include <iostream>
#include <string>
using namespace std;

int main() {

	string str, result;
	cin >> str;

	result += str[0];

	for(int i = 1; i < str.size(); i++){
		if(isupper(str[i])){
			result += str[i];
		}
	}
	cout << result;
	return 0;
}
// 1100번 하얀 칸
#include <iostream>
#include <string>
using namespace std;

int main() {

	char board[8][8];
	int result = 0;

	for(int i = 0; i < 8; i++){
		for(int j = 0; j < 8; j++){
			cin >> board[i][j];
			if((i%2 == 0&&j%2 == 0&&board[i][j] == 'F') ||
			(i%2 == 1&&j%2 == 1&&board[i][j] == 'F')){
				result += 1;
			}
		}
	}
	cout << result;
	
	return 0;
}