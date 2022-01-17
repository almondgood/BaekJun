# 코드
#include <iostream>
#include <climits>
#include <cmath>


using namespace std;

int main() {
	int N;
	for (int i = 0; i < 3; i++) {
		int overflow = 0;
		long long int input, sum = 0;
		cin >> N;
		while (N--) {
			cin >> input;
			if (sum > 0 && input > 0 && sum > LLONG_MAX - input) {
				overflow++;
			}
			else if (sum < 0 && input < 0 && sum < LLONG_MIN - input) {
				overflow--;
			}
			sum += input;
		}
		if (overflow > 0) cout << '+' << '\n';
		else if (overflow < 0) cout << '-' << '\n';
		else {
			if (sum > 0) cout << '+' << '\n';
			else if (sum < 0) cout << '-' << '\n';
			else cout << '0' << '\n';
		}
	}
	return 0;
}