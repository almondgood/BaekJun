#include <iostream>
#include <cmath>

using namespace std;

int hanoi(int n, int from, int to);

int main() {

	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n = 0;

	cin >> n;

	int count = pow(2, n);
	cout << count - 1 << '\n';

	hanoi(n, 1, 3);

	return 0;
}

int hanoi(int n, int from, int to) {
	if (n == 1) {
		cout << from << ' ' << to << '\n';
		return 0;
	}

	hanoi(n - 1, from, 6 - from - to); 
	cout << from << ' ' << to << '\n';
	hanoi(n - 1, 6 - from - to, to);

	return 0;
}