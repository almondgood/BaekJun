#include <iostream>

using namespace std;

int main() {

	int value;
	cin >> value;

	for (int i = 0; i < value; i++) {
		for (int k = 0; k < value; k++) {
			if (k < value - i - 1) {
				cout << ' ';
			}
			else { cout << '*'; }
		}
		puts("");
	}

	return 0;
}