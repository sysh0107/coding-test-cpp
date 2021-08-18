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