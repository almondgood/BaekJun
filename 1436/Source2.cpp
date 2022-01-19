#include <iostream>
#include <string>

using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n = 0;
	cin >> n;

	string ans = "";
	int val = 666;
	while (n) {
		ans = to_string(val);
		if (ans.find("666") != string::npos) {
			n--;
		}
		val++;
	}
	
	cout << ans;

	return 0;
}