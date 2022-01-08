# 문제 주소
https://www.acmicpc.net/problem/2579

# 문제 이름
계단 오르기

# 코드
#include <iostream>
using namespace std;

int bigger(int a, int b) {
	if (a > b) return a;
	else return b;
}


int main() {

	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n;
	cin >> n;

	int arr[301] = { 0, };
	int max[301] = { 0, };
	for (int i = 1; i <= n; i++) {
		cin >> arr[i];
	}

	max[1] = arr[1];
	max[2] = arr[1] + arr[2];

	for (int i = 3; i <= n; i++) {
		max[i] = bigger((max[i - 3] + arr[i - 1] + arr[i]), (max[i - 2] + arr[i]));
	}
		
	cout << max[n];

	return 0;
	
}

