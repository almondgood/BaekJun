#include <iostream>

using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int N, X;
	cin >> N >> X;

	int* pa = new int[N];

	for (int i = 0; i < N; i++) {
		cin >> pa[i];
		if (pa[i] < X) { cout << pa[i] << ' '; }
	}

	delete[] pa;

	return 0;
}