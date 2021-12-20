#include <iostream>

using namespace std;

int main() {
	
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int m, n;
	cin >> m >> n;

	bool isPrime[1000001] = { false, };
	isPrime[1] = true;

	for (int i = 2; i <= n; i++) { // 1 ~ 1000000
		for (int k = 2; i * k <= n; k++) { // 배수 검사
			if (!isPrime[i * k]) { isPrime[i * k] = true; }
		}
	}

	for (int i = m; i <= n; i++) {
		if (!isPrime[i]) { cout << i << '\n'; }
	}

	return 0;
}
