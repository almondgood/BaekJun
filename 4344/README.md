# 문제 주소
https://www.acmicpc.net/problem/4344

# 문제 이름
평균은 넘겠지

# 코드
#include <iostream>


using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int c, n;
	int score[1001];

	cin >> c;

	while (c--) {
		cin >> n;
		
		int avg = 0;
		for (int i = 0; i < n; i++) {
			cin >> score[i];
			avg += score[i];
		}
		fflush(stdin);

		avg /= n;

		int count = 0;
		float overAvg = 0;
		for (int i = 0; i < n; i++) {
			if (score[i] > avg) count++;
		}
		
		overAvg = ((float)count / n) * 100;

		cout << fixed;
		cout.precision(3);
		cout << overAvg << '%' << '\n';
	}

	return 0;
}

# 유의점
C++에서 소수점을 다룰 때
cout << fixed (== cout.setf(ios::fixed)) // 고정 소수점
cout.precision(N) // N만큼 소수점 생성
cout.unsetf(ios::fixed) // 변동 소수점(고정 소수점 해제)

버퍼 지우는 함수
fflush(stdin)
std::cin.clear()