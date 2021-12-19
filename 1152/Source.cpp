#include <iostream>
#include <string>

using namespace std;

int main() {
	
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	string str;
	getline(cin, str);

	int cnt = 0;
	bool isWord = false;
	
	for (int i = 0; i <= str.length(); i++) {
		if ((str[i] == ' ') || (str[i] == '\0')) {
			if (isWord) {	// "    The Benjamin Button  " => 첫 공백은 무시, 이후 공백은 단어 개수 +1
				cnt++;
			}
			isWord = false;
		}
		else {
			isWord = true;
		}
	}

	cout << cnt;

	return 0;
}
