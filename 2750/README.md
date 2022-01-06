# 문제 주소
https://www.acmicpc.net/problem/2750

# 문제 이름
수 정렬하기

# 코드
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void swap(int *a, int *b) {
	int* tmp = b;
	b = a;
	a = tmp;
	return;
}

int main() {
	
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n;
	int arr[1001];
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	for (int i = 0; i < n; i++) {
		for (int k = 0; k < n - 1 - i; k++) {
			if (arr[k] > arr[k + 1])
				swap(arr[k], arr[k + 1]);
		}
	}
	
	for (int i = 0; i < n; i++) {
		cout << arr[i] << ' ';
	}

	return 0;
}

# 유의점
버블정렬