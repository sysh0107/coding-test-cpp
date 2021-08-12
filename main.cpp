
#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int main() {
	
	int N, cnt = 0;
	cin >> N;

	for(int i = 0; i < N; i++){
		int a = 0;
		cin >> a;
		if(a == 1){
			cnt += 1;
		}
	}

	if(cnt > N - cnt) cout << "Junhee is cute!";
	else cout << "Junhee is not cute!";
	

	return 0;
}