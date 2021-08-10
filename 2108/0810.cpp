// 2752번 세수정렬
#include <iostream>
#include <string>
using namespace std;

int main() {

	int a, b, c;
	int fir, sec, thir;

	cin >> a >> b >> c;

	if (a > b && b > c){
		fir = a;
		sec = b;
		thir = c;

	}
	if (a > c && c > b){
		fir = a;
		sec = c;
		thir = b;
	}
	if (b > a && a > c){
		fir = b;
		sec = a;
		thir = c;
	}
	if (b > c && c > a){
		fir = b;
		sec = c;
		thir = a;
	}
	if (c > a && a > b){
		fir = c;
		sec = a;
		thir = b;
	}
	if (c > b && b > a){
		fir = c;
		sec = b;
		thir = a;
	}
	

	cout << thir << ' ' << sec << ' '  << fir;
	return 0;
}

// 10162번 전자레인지

// 2480번 주사위 세개
#include <iostream>
#include <string>
using namespace std;

int main() {
	
	int a, b, c = 0;
	int result = 0;
	
	cin >> a>>b>>c;

	if(a == b && a == c){
		result = 10000 + a * 1000;
	}
	else if(a == b || a == c){
		result = 1000 + a * 100;
	}
	else if(b == c){
		result = 1000 + b* 100;
	}
	else{
		if(a < b) a = b;
		if(a < c) a = c;
		result = a * 100;
	}

	cout << result;

	return 0;
}
// 10156번 과자
#include <iostream>
#include <string>
using namespace std;

int main() {
	
	int a, b, c = 0;
	int result = 0;
	
	cin >> a>>b>>c;

	result = a * b - c;

	if(result > 0){
		cout << result;
	}
	else {
		cout << 0;
	}

	return 0;
}
// 2420번 사파리월드
#include <iostream>
#include <string>
using namespace std;

int main() {
	
	long long a, b = 0;
	long result = 0;
	
	cin >> a>>b;

	result = a - b;

	if(result > 0) cout << result;
	else cout << -result;

	return 0;
}
// 2530번 인공지능 시계
#include <iostream>
#include <string>
using namespace std;

int main() {
	
	int a, b, c = 0;
	int time = 0;
	int need_time;
	int r_a, r_b, r_c = 0;
	
	cin >> a>>b>>c;
	cin >> need_time;

	time = a * 3600 + b * 60 + c + need_time;
	r_a = time / 3600;
	r_a %= 24;
	r_b = time % 3600 / 60;
	r_c = time % 60;

	cout << r_a<<' '<<r_b<<' '<<r_c;

	return 0;
}
// 2522번 별 찍기 - 12
#include <iostream>
#include <string>
using namespace std;

int main() {
	
	int a = 0;
	cin >> a;

	for(int i = 0; i < a; i++){
		for(int j = 0; j < a-i-1; j++){ cout << " "; }

		for(int s = 0; s < i + 1; s++){ cout << "*"; }
		cout << endl;
	}
	for(int i = 0; i < a-1; i++){
		for(int s = 0; s < i + 1; s++){ cout << " "; }

		for(int j = 0; j < a-i-1; j++){ cout << "*"; }

		cout << endl;
	}

	return 0;
}
// 1009번 분산처리
#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main() {
	
	int T = 0;
	cin >> T;

	for(int i = 0; i < T; i++){
		
		int a, b = 0;
		int result = 1;
		cin >> a>>b;

		for(int j = 0; j < b; j++){
			result *= a;
			result %= 10;
			//cout << result<<"_";
		}
		if(result == 0){
			result = 10;
		}
		cout << result<<"\n";
	}

	return 0;
}
// 2576번 홀수
#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main() {
	
	int inp[7], sum = 0;
	int min = 100;
	for(int i = 0; i < 7; i++){
		cin >> inp[i];
		if(inp[i] % 2 == 1){
			sum += inp[i];
			if(min > inp[i]){
				min = inp[i];
			}
		}
	}
	if(sum == 0){
		cout <<"-1";
	}
	else{
		cout << sum<<"\n"<<min;
	}
	

	return 0;
}
// 5086번 배수와 약수
#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main() {
	
	while(1){
		int a, b = 0;

		cin >> a>>b;
		if(a == 0){
			break;
		}
		else if(a % b == 0){
			cout << "multiple\n";
		}
		else if(b % a == 0){
			cout << "factor\n";
		}
		else{
			cout << "neither\n";
		}
	}
	
	return 0;
}