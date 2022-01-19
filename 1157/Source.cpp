#include <iostream>

using namespace std;

int main() {
	
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	string input;
	int alpha[26] = { 0, };

	cin >> input;

	for (int i = 0; i < input.length(); i++) {
		input[i] = tolower(input[i]);
		alpha[input[i] - 'a']++;
	}

	char ans = 0;
	int tmp = alpha[0];
	bool multiAns = false;
	for (int i = 1; i < 26; i++) {
		if (tmp < alpha[i]) {
			tmp = alpha[i];
			ans = i;
			multiAns = false;
		}
		else if (tmp == alpha[i]) {
			multiAns = true;
		}
	}

	ans += 'A';
	if (multiAns) { cout << '?'; }
	else { cout << ans; }
	
	return 0;
}
