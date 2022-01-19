#include <iostream>

using namespace std;

int main() {
	int N, K;
	int A[10], count[10] = { 0, }, sum = 0;
	cin >> N >> K;
	for (int i = 0; i < N; i++) {
		cin >> A[i];
	}
	for (int i = N - 1; i >= 0; i--) {
		if (K / A[i]) {
			count[i] = K / A[i]; // 동전으로 나눠서 몫만큼 추가
			K %= A[i];
		}
	}
	for (int i = 0; i < N; i++) {
		if (count[i]) sum += count[i]; // 동전 가치 * 몫
	}
	cout << sum;
	return 0;
}
