# 문제 주소
https://www.acmicpc.net/source/36401757

# 문제 이름
더하기 사이클

# 코드

#include <iostream>

using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int N, count = 0;
	cin >> N;

	int tmp;

	if (N < 10) {
		tmp = N * 10 + N;
	}
	else {
		tmp = ((N % 10) * 10) + ((N / 10) + (N % 10)) % 10;
	}
	count++;

	while (tmp != N) {
		if (tmp < 10) {
			tmp = tmp * 10 + tmp;
		}
		else {
			tmp = ((tmp % 10) * 10) + ((tmp / 10) + (tmp % 10)) % 10;
		}
		count++;
	}
	
	cout << count;

	return 0;
}

# 유의점
이전에 풀었을 때는 십의 자리와 일의 자리 수를 변수 ten, one으로 나누어 각각 할당해 주었었다.
이번에는 변수 tmp 하나로 처리해 보았는데, 십의 자리와 일의 자리로 나누는 것이 더 보기 좋을 것 같다.