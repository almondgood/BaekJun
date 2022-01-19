#include <iostream>
#include <cmath>

using namespace std;

int main() {
	
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int t;
	cin >> t;

	while (t--) {
		long long int x, y, i = 0;
		cin >> x >> y;

		long long int d = y - x;

		while (d > (i * (i + 1))) {
			i++;
		}

		if (d <= i * i) {
			cout << i * 2 - 1 << '\n';
		}
		else cout << i * 2 << '\n';
	}


	return 0;
}
