# 코드
#include <iostream>
#include <queue>
using namespace std;

int main() {
	int n;
	cin >> n;
	queue<int> que;

	for (int i = 1; i <= n; i++) {
		que.push(i);
	}

	while (true) {
		cout << que.front() << " ";
		que.pop();
		if (!que.size()) break;
		int tmp;
		tmp = que.front();
		que.pop();
		que.push(tmp);
	}

	return 0;
}