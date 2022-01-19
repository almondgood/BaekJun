# 문제 주소
https://www.acmicpc.net/problem/1021

# 문제 이름
회전하는 큐

# 코드
#include <iostream>
#include <deque>
using namespace std;


int main() {

	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	deque<int> q;
	int count = 0;

	int n, m;
	cin >> n >> m;

	for (int i = 1; i <= n; i++) {
		q.push_back(i);
	}

	while (m--) {
		int val = 0;
		cin >> val;

		int index = 0;
		for (;; index++) {
			if (q[index] == val) break;
		}

		if (index > q.size() / 2) {
			while (q.front() != val) {
				q.push_front(q.back());
				q.pop_back();
				count++;
			}
		}
		else {
			while (q.front() != val)
			{
				q.push_back(q.front());
				q.pop_front();
				count++;
			}
		}

		q.pop_front();
	}
	
	cout << count;

	return 0;
}

# 유의점
deque는 vector와 queue의 특징을 섞은 자료구조로, 앞 뒤 모두 push 또는 pop을 할 수 있다.
queue나 stack과는 달리 각각의 인덱스에 접근, 수정이 가능하다.

배열의 중간보다 오른쪽에 존재하면 오른쪽으로 회전,
왼쪽에 존재하면 왼쪽으로 회전한다.