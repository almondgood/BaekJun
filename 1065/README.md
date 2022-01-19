# 문제 주소
https://www.acmicpc.net/problem/1065

# 문제 이름
한수

# 코드
#include <iostream>

using namespace std;

int main() {
	
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, cnt = 0;

	cin >> n;

	for (int i = 1; i <= n; i++) {
		if (i < 100) { // 한자리, 두자리 수
			cnt++;
		}
		else { // 세자리 수
			int hun, ten, one;
			hun = i / 100;
			ten = (i / 10) % 10;
			one = i % 10;

			if ((hun - ten) == (ten - one)) { cnt++; }

		}
	}

	cout << cnt;
	
	return 0;
}

# 유의점
복잡하게 생각하지 말 것