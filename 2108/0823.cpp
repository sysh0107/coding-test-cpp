// 1373번 2진수 8진수

// 10798번 세로읽기

// 11728번 배열 합치기
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	ios_base :: sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int N, M;
	cin >> N >> M;

	int A[N], B[M], C[N + M];

	for(int i = 0; i < N; i++){
		cin >> A[i];
		C[i] = A[i];
	}
	for(int i = 0; i < M; i++){
		cin >> B[i];
		C[i + N] = B[i];
	}
	
	sort(C, C + (N + M));

	for(int i = 0; i < N + M; i++){
		cout << C[i] <<' ';
	}
	

	return 0;
}