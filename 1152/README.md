# 문제 주소
https://www.acmicpc.net/problem/1152

# 문제 이름
단어의 개수 

# 코드
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

# 유의점
length() 메소드는 맨 마지막의 널문자를 포함하지 않는다.