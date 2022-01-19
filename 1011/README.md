#문제 주소
https://www.acmicpc.net/problem/1011

# 문제 이름
Fly me to the Alpha Centauri

# 코드
#include <iostream>
#include <cmath>

using namespace std;

int main() {
	
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int t;
	cin >> t;

	while (t--) {
		long long int x, y, i = 0;
		cin >> x >> y;

		long long int d = y - x;



		while (d > (i * (i + 1))) {
			i++;
		}


		if (d <= i * i) {
			cout << i * 2 - 1 << '\n';
		}
		else cout << i * 2 << '\n';
	}


	return 0;
}

# 유의점
규칙을 찾는 것이 우선이었다.
// 제곱수가 힌트

여러 테스트를 반복할 때마다 변수를 초기화 시켜주어야 한다.