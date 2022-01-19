#include <iostream>

using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int A, B;

	while (1) {
		cin >> A >> B;
		if (cin.eof()) break;
		cout << A + B << '\n';
	}

	return 0;
}