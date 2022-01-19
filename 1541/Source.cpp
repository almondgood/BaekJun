#include <iostream>
#include <string>

using namespace std;

int main() {
	
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	string s;
	cin >> s;

	string n;
	int sum = 0;
	bool isMinus = false;
	
	for (int i = 0; i <= s.size(); i++) {
		if (s[i] == '-' || s[i] == '+' || i == s.size()) {
			if (isMinus) {
				sum -= stoi(n);
				n = "";
				
			}
			else {
				sum += stoi(n);
				n = "";
			}
		}
		else n += s[i];

		if (s[i] == '-') {
			isMinus = true;
		}
		
	}

	cout << sum;

	return 0;
}
