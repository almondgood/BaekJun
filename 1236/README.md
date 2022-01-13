# 코드
#include <iostream>

using namespace std;

int main() {
	int N, M, tmp = 0;
	char castle[51][51] = { 0, };
	cin >> N >> M;

	for (int i = 0; i < N; i++) {
		for (int k = 0; k < M; k++) {
			cin >> castle[i][k];
			if (castle[i][k] == 'X') {
				castle[50][k] = 1;
				castle[i][50] = 1;
			}
		}
	}
	
	for (int i = 0, k = 0; i < N || k < M;) {
		if (i < N && !castle[i][50]) {
			tmp++;
		}
		if (k < M && !castle[50][k]) {
			castle[50][50]++;
		}
		if (i < N) i++;
		if (k < M) k++;
	}
	castle[50][50] = tmp < castle[50][50] ? castle[50][50] : tmp;

	cout << (int)castle[50][50];
	return 0;
}