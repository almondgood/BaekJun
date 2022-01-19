# 문제 주소
https://www.acmicpc.net/problem/10951

# 문제 이름
A+B - 4 

# 코드

#include <iostream>

using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int A, B;

	while (1) {
		cin >> A >> B;
		if (cin.eof()) break;
		cout << A + B << '\n';
	}

	return 0;
}

# 유의점
이 문제는 케이스의 개수가 정해지지 않았고, 테스트할 때 케이스 파일을 집어 넣어서 검사하므로 케이스의 범위를 EOF로 검사해야 한다. 이를 검사하려면 cin.eof() 라는 함수를 사용하고, bool를 리턴한다.