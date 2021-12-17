#include <iostream>

using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int N, count = 0;
	cin >> N;

	int tmp;

	if (N < 10) {
		tmp = N * 10 + N;
	}
	else {
		tmp = ((N % 10) * 10) + ((N / 10) + (N % 10)) % 10;
	}
	count++;

	while (tmp != N) {
		if (tmp < 10) {
			tmp = tmp * 10 + tmp;
		}
		else {
			tmp = ((tmp % 10) * 10) + ((tmp / 10) + (tmp % 10)) % 10;
		}
		count++;
	}
	
	cout << count;

	return 0;
}