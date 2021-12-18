# 문제 주소
https://www.acmicpc.net/problem/1157

# 문제 이름
단어 공부

# 코드
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

# 유의점
알파벳 개수를 담을 변수의 자료형은 char가 아닌 int로 선언해야 한다.
범위가 1,000,000이라서 char의 최대 용량을 넘기 때문.
