// 10699번 오늘 날짜
#include <iostream>
using namespace std;

int main() {
	cout << "2021-08-02";
	return 0;
}

// 5337번 웰컴
#include <iostream>
using namespace std;

int main() {
	cout << ".  .   .\n";
	cout << "|  | _ | _. _ ._ _  _\n";
	cout << "|/\\|(/.|(_.(_)[ | )(/.\n";

	return 0;
}

// 9653번 스타워즈 로고
#include <iostream>
using namespace std;

int main() {

	cout << "    8888888888  888    88888\n";
	cout << "   88     88   88 88   88  88\n";
	cout << "    8888  88  88   88  88888\n";
	cout << "       88 88 888888888 88   88\n";
	cout << "88888888  88 88     88 88    888888\n";
	cout << "\n";
	cout << "88  88  88   888    88888    888888\n";
	cout << "88  88  88  88 88   88  88  88\n";
	cout << "88 8888 88 88   88  88888    8888\n";
	cout << " 888  888 888888888 88  88      88\n";
	cout << "  88  88  88     88 88   88888888\n";

	return 0;
}

// 2845번 파티가 끝나고 난 뒤
#include <iostream>
using namespace std;

int main() {
	int L, P;
	int p1, p2, p3, p4, p5;
	cin >> L >> P;
	cin >> p1 >> p2 >> p3 >> p4 >> p5;

	int num;
	num = L * P;
	cout << p1 - num << ' ';
	cout << p2 - num << ' ';
	cout << p3 - num << ' ';
	cout << p4 - num << ' ';
	cout << p5 - num;

	return 0;
}

// 9654번 나부 함대 데이터
#include <iostream>
using namespace std;

int main() {
	
	cout << "SHIP NAME      CLASS          DEPLOYMENT IN SERVICE\n";
	cout << "N2 Bomber      Heavy Fighter  Limited    21        \n";
	cout << "J-Type 327     Light Combat   Unlimited  1         \n";
	cout << "NX Cruiser     Medium Fighter Limited    18        \n";
	cout << "N1 Starfighter Medium Fighter Unlimited  25        \n";
	cout << "Royal Cruiser  Light Combat   Limited    4         \n";
	
	return 0;
}

// 5339번 콜센터
#include <iostream>
using namespace std;

int main() {
	
	cout << "     /~\\\n";
	cout << "    ( oo|\n";
	cout << "    _\\=/_\n";
	cout << "   /  _  \\\n";
	cout << "  //|/.\\|\\\\\n";
	cout << " ||  \\ /  ||\n";
	cout << "============\n";
	cout << "|          |\n";
	cout << "|          |\n";
	cout << "|          |\n";
	
	return 0;
}

// 10926번 ??!
#include <iostream>
#include <string>
using namespace std;

int main() {
	string id;

	cin >> id;
	cout << id + "??!";

	return 0;
}

// 10170번 NFC West vs North
#include <iostream>
#include <string>
using namespace std;

int main() {

	cout << "NFC West       W   L  T\n";
	cout << "-----------------------\n";
	cout << "Seattle        13  3  0\n";
	cout << "San Francisco  12  4  0\n";
	cout << "Arizona        10  6  0\n";
	cout << "St. Louis      7   9  0\n";
	cout << "\n";
	cout << "NFC North      W   L  T\n";
	cout << "-----------------------\n";
	cout << "Green Bay      8   7  1\n";
	cout << "Chicago        8   8  0\n";
	cout << "Detroit        7   9  0\n";
	cout << "Minnesota      5  10  1\n";

	return 0;
}

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

// 10797번 10부제
#include <iostream>
#include <string>
using namespace std;

int main() {

	int day, c1, c2, c3, c4, c5, cnt;
	cin >> day >> c1 >> c2 >> c3 >> c4 >> c5;
	cnt = 0;
	
	if(c1 == day){
		cnt += 1;
	}
	if(c2 == day){
		cnt += 1;
	}
	if(c3 == day){
		cnt += 1;
	}
	if(c4 == day){
		cnt += 1;
	}
	if(c5 == day){
		cnt += 1;
	}
	cout << cnt;

	return 0;
}