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
				quad(n / 2, x, y); // ÁÂ»ó
				quad(n / 2, x + n / 2, y); // ¿ì»ó
				quad(n / 2, x, y + n / 2); // ÁÂÇÏ
				quad(n / 2, x + n / 2, y + n / 2); // ¿ìÇÏ
				cout << ")";

				return;
			}
		}
	}

	cout << current;

	return;
}
