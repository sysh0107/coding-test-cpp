// 3003번 킹, 퀸, 룩, 비숍, 나이트, 폰
#include <iostream>
#include <string>
using namespace std;

int main() {

	int king, queen, look, bi, kni, pone;
	cin >> king >> queen >> look >> bi >> kni >> pone;
	cout << 1 - king << " ";
	cout << 1 - queen << " ";
	cout << 2 - look << " ";
	cout << 2 - bi << " ";
	cout << 2 - kni << " ";
	cout << 8 - pone;

	return 0;
}