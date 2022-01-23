# 코드

#include <iostream>
#include <stack>
using namespace std;

int main() {
	int n, count= 0;
	cin >> n;
	stack<int> s;

	for (int i = 1; i <= n; i++) {
		int tmp;
		cin >> tmp;
		s.push(tmp);
	}

	int tmp = 0;
	for (int i = 0; i < n; i++) {
		if (s.top() > tmp) {
			count++;
			tmp = s.top();
		}
		s.pop();
	}
	cout << count;

	return 0;
}