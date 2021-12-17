#include <iostream>


using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int c, n;
	int score[1001];

	cin >> c;

	while (c--) {
		cin >> n;
		
		int avg = 0;
		for (int i = 0; i < n; i++) {
			cin >> score[i];
			avg += score[i];
		}
		fflush(stdin);

		avg /= n;

		int count = 0;
		float overAvg = 0;
		for (int i = 0; i < n; i++) {
			if (score[i] > avg) count++;
		}
		
		overAvg = ((float)count / n) * 100;

		cout << fixed;
		cout.precision(3);
		cout << overAvg << '%' << '\n';
	}

	return 0;
}