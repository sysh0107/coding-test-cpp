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