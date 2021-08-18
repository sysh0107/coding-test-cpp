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