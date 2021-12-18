#include <iostream>

using namespace std;

int main() {
	
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, cnt = 0;

	cin >> n;

	for (int i = 1; i <= n; i++) {
		if (i < 100) { // 한자리, 두자리 수
			cnt++;
		}
		else { // 세자리 수
			int hun, ten, one;
			hun = i / 100;
			ten = (i / 10) % 10;
			one = i % 10;

			if ((hun - ten) == (ten - one)) { cnt++; }

		}
	}

	cout << cnt;
	
	return 0;
}
