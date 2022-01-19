#include <iostream>
#include <string>

using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n = 0;
	cin >> n;

	int ans = 666;
	for (int i = 1; i <= n; ans++) {
		int cnt = 0;

		for (int k = ans; k != 0; k /= 10) {
			if (k % 10 == 6) {
				cnt++;
			}
			else { cnt = 0; }

			if (cnt >= 3) {
				i++;
				break;
			}

		}

	}

	ans--;
	cout << ans;

	return 0;
}