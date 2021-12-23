#include <iostream>
#include <stack>

using namespace std;

int main() {
	
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int n = 0;
	stack<int> s;

	cin >> n;

	for (int i = n; i > 0; i++) {
		s.push(i);
	}

	for (int i = 0; i < n; i++) {
		cout << s[i];
	}



	return 0;
}
