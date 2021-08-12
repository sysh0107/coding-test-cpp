// 2875번 대회 or 인턴
#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int main() {
	
	int a, b, c, cnt = 0;
	cin >> a>>b>>c;

	while(a + b - c >= 3 && a >= 2 && b >= 1){
		a -= 2;
		b -= 1;
		cnt += 1;
	}
	cout << cnt;

	return 0;
}

// 10886번 0 = not cute / 1 = cute
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