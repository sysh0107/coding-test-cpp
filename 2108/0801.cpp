// 1550번 16진수
#include <iostream>
using namespace std;

int main() {
  
  int hex_num;
  cin>>hex>>hex_num;
  cout<<dec<<hex_num;

  return 0;
}

// 2914번 저작권
#include <iostream>
using namespace std;

int main() {
	int song;
	int average;
	int melody;

	cin >> song;
	cin >> average;
	
	melody = song * average - song + 1;
	cout << melody;
	
  return 0;
}

