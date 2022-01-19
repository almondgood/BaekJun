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
	q[1] = 2;
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
