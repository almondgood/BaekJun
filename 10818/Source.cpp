#include <iostream>

using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, tmp, max = 0, min = 0;

	cin >> n;
	cin >> max;
	min = max;

	for (int i = 0; i < n - 1; i++) {
		cin >> tmp;
		if (tmp > max) max = tmp;
		else if (tmp < min) min = tmp;
	}

	cout << min << ' ' << max;

	return 0;
}