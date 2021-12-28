#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main() {
	string str = "";
	
	
	while (true) { // n¹ø

		stack<char> s;
		getline(cin, str);
		bool isBalance = true;
		if (str == ".")	break;
		
		for (int i = 0; i < str.length(); i++) {
			if (str[i] == '(' || str[i] == '[') s.push(str[i]);

			else if (str[i] == ')') {
				if (!s.empty() && s.top() == '(') s.pop();
				else isBalance = false;
			}
			else if (str[i] == ']') {
				if (!s.empty() && s.top() == '[') s.pop();
				else isBalance = false;
			}
			if (!isBalance) break;
		}
		
		if (isBalance && s.empty()) cout << "yes" << '\n';
		else cout << "no" << '\n';

	}
	return 0;
}









/*
int main() {

	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n;
	cin >> n;

	stack<int> s, ans;


	for (int i = 0; i < n; i++) {
		int x = 0;
		cin >> x;
		s.push(x);
	}

	int max = s.top(), bigger = s.top();
	ans.push(-1);
	s.pop();
	
	
	for (int i = 1; i < n; i++) {
		int tmp = s.top();
		s.pop();

		max = max < tmp ? tmp : max;
		
		if (tmp < bigger) {
			ans.push(bigger);
		}
		else {
			if (tmp < max) {
				ans.push(max);
			}
			else {
				ans.push(-1);
			}
			bigger = tmp;
		}
		
		if (i != n - 1 && tmp > s.top()) {
			bigger = tmp;
		}
	}

	for (int i = 0; i < n; i++) {
		cout << ans.top() << ' ';
		ans.pop();
		}
	
	return 0;
}
*/