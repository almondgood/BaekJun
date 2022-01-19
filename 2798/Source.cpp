#include <iostream>
#include <vector>

using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n, m;
	vector<int> bkjk;
	cin >> n >> m;

	for (int i = 0; i < n; i++) {
		int tmp;
		cin >> tmp;
		bkjk.push_back(tmp);
	}

	int ans = 0;
	for (int i = 0; i < n; i++) {
		int sum = 0;

		for (int k = i + 1; k < n; k++) {
			
			for (int h = k + 1; h < n; h++) {
				sum = bkjk[i] + bkjk[k] + bkjk[h];
				
				if (ans <= sum && sum <= m) ans = sum;
				if (ans == m) break;
			}
			if (ans == m) break;
		}
		if (ans == m) break;
	}

	cout << ans;

	return 0;
}

