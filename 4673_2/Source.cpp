#include <iostream>

using namespace std;

int notSelfNum(int n);

int main() {

	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	bool selfNum[10001] = { false, };

	for (int i = 1; i < 10001; i++) {
		selfNum[notSelfNum(i)] = true;
	}
	
	for (int i = 1; i < 10001; i++) {
		if (!selfNum[i]) { cout << i << '\n'; }
	}

	return 0;
}

int notSelfNum(int n)
{
	int sum = n;
	while (n) {
		sum += n % 10;
		n /= 10;
	}

	if (sum > 10000) return 0;

	return sum;
}
