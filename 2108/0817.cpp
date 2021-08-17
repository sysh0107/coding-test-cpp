// 2953번 나는 요리사다

// 5565번 영수증
#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int main() {
	
	int sum = 0;
	cin >> sum;
	int books[9];
	for(int i = 0; i < 9; i++){
		cin >> books[i];
		sum -= books[i];
	}
	cout << sum;

	return 0;
}

// 10992번 별 찍기 - 17
#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int main() {
	
	int N = 0;
	cin >> N;

	for(int i = 0; i < N - 1; i++){
		for(int j = N - i - 1; j > 0; j--){
			cout << ' ';
		}
		cout << '*';
		for(int k = 0; k < i * 2 - 1; k++){
			cout << ' ';
		}
		if(i != 0){
			cout << '*';
		}

		cout << '\n';
	}

	for(int i = 0; i < N*2 - 1; i++){
		cout << "*";
	}
	

	return 0;
}