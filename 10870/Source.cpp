#include <iostream>
#include <cmath>

using namespace std;

int pibonaci(int cnt, int n);

int main() {
	
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int n = 0;

	cin >> n;

	cout << pibonaci(0, n);

	return 0;
}

int pibonaci(int cnt, int n)
{
	int pb = 0;
	if (n == 0) { return 0; }
	else if (n == 1) { return 1; }
	else if (cnt == n) {
		return pb;
	}
	else { pb += pibonaci(cnt, n) + pibonaci(cnt + 1, n); }

	return pb;
}
