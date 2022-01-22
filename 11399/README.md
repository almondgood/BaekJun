# 코드
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main() {
	int N;
	vector<int> man;
	cin >> N;
	
	for (int i = 0; i < N; i++) {
		int time;
		cin >> time;
		man.push_back(time);
	}
	sort(man.begin(), man.end());

	int sum = 0;
	for (int i = 0; i < N; i++) {
		sum += man[i] * (N - i);
	}
	cout << sum;
	return 0;
}