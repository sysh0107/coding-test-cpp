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