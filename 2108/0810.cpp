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