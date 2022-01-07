# 문제 주소
https://www.acmicpc.net/problem/1003

# 문제 이름
피보나치 함수

# 코드
#include <iostream>
using namespace std;

int arr1[41] = { 0, 1, 1, };

void fibonacci(int n) {

	if (n < 2)
		return;
	else if (!arr1[n - 1])
		fibonacci(n - 1);
		arr1[n] = arr1[n - 1] + arr1[n - 2];
	
	return;
};

int main() {
	
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	
	int n;
	cin >> n;

	while (n--) {
		int input = 0;
		cin >> input;
		fibonacci(input);

		if (input == 0)
			cout << arr1[1] << ' ' << arr1[0] << '\n';
		else 
			cout << arr1[input - 1] << ' ' << arr1[input] << '\n';
	}
	return 0;
}

# 유의점
동적 프로그래밍(DP)

0 : 1 0 1 1 2 3 5 8 ...
1 : 0 1 1 2 3 5 8 13 ...

위처럼 1은 첫번째가 0인 피보나치 수열이고, 0은 첫번째가 1인 피보나치 수열이고, 1보다 한번 느리므로
배열을 하나 선언해서 수열을 저장하고, 그 전 인덱스에 수가 저장되어 있을 경우 생략한다.
