# 문제 주소
https://www.acmicpc.net/problem/1436

# 문제 이름
영화감독 숌

# 코드1
#include <iostream>
#include <string>

using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n = 0;
	cin >> n;

	int ans = 666;
	for (int i = 1; i <= n; ans++) {
		int cnt = 0;

		for (int k = ans; k != 0; k /= 10) {
			if (k % 10 == 6) {
				cnt++;
			}
			else { cnt = 0; }
			
			if (cnt >= 3) { 
				i++; 
				break;
			}

		}
		
	}

	ans--;
	cout << ans;

	return 0;
}

# 코드2
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

# 유의점
숫자 자리수를 반복 검사할 경우에는 10씩 나누는 방법을 생각해볼 수 있다.
또는 find함수를 이용해 통째로 찾아버리는 수도 있다.
find함수를 이용할 경우 배열 전체를 검사하기 때문에 10씩 나누는 것에 비해 속도가 느리다.