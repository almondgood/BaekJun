#include <iostream>
#include <cmath>

using namespace std;

int main() {
	
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int t = 0;
	bool prime[10001] = { true, true, };

	cin >> t;

	for (int i = 2; i < 10001; i++) {
		for (int k = 2; i * k < 10001; k++) {
			prime[i * k] = true;
		}
	}
	
	while (t--) {
		int n = 0;
		cin >> n;

		if (!prime[n / 2]) {
			cout << n / 2 << ' ' << n / 2 << '\n';
		}
		else {
			int x = 0, y = 0;
			for (int i = n / 2; i > 1; i--) {
				if (!prime[i]) {
					for (int k = n / 2; k < n; k++) {
						if (!prime[k] && i + k == n) {
							x = i;
							y = k;
							break;
						}
					}
				}
				if (x + y == n) break;
			}

			cout << x << ' ' << y << '\n';
		}
		

	}


	return 0;
}
