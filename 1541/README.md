# 문제 주소
https://www.acmicpc.net/problem/1541

# 문제 이름
잃어버린 괄호

# 코드
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

# 유의점
string 배열을 하나 더 선언해서 연산자를 기준으로 쌓기