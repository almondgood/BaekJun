# 문제 주소
https://www.acmicpc.net/problem/1992

# 문제 이름
쿼드트리

# 코드
#include <iostream>

using namespace std;

void quad(int n, int x, int y);
string s[64];

int main() {
	ios::sync_with_stdio(false);

	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> s[i];
	}
	
	quad(n, 0, 0);

	return 0;
}

void quad(int n, int x, int y)
{
	char current = s[y][x];

	for (int i = y; i < y + n; i++) {
		for (int k = x; k < x + n; k++) {
			if (current != s[i][k]) {
				cout << "(";
				quad(n / 2, x, y); // 좌상
				quad(n / 2, x + n / 2, y); // 우상
				quad(n / 2, x, y + n / 2); // 좌하
				quad(n / 2, x + n / 2, y + n / 2); // 우하
				cout << ")";

				return;
			}
		}
	}

	cout << current;

	return;
}

# 유의점
분할정복, 재귀