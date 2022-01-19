# 문제 주소
https://www.acmicpc.net/problem/2164

# 문제 이름
카드 2

# 코드
#include <iostream>
#include <queue>
using namespace std;


int main() {

	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n;
	cin >> n;

	queue<int> q;

	for (int i = 1; i <= n; i++) {
		q.push(i);
	}

	while (q.size() != 1) {
		q.pop();
		q.push(q.front());
		q.pop();
	}

	cout << q.front();

	return 0;
}

# 유의점
큐 활용