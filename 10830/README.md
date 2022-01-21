# 문제 주소
https://www.acmicpc.net/problem/10830

# 문제 이름
행렬 제곱


# 코드
#include <iostream>

using namespace std;
int arr[5][5];
int arr2[5][5];
int ans[5][5];

void arrMulti(int n, int y, int x);

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);



	int n, b;
	cin >> n >> b;
	for (int i = 0; i < n; i++) {
		for (int k = 0; k < n; k++) {
			cin >> arr[i][k];
			arr2[i][k] = arr[i][k];
			ans[i][k] = arr[i][k];
		}
	}

	for (int i = 0; i < b - 1; i++) {

		for (int k = 0; k < n; k++) {
			for (int j = 0; j < n; j++) {
				arrMulti(n, k, j);
			}
		}

		for (int k = 0; k < n; k++) {
			for (int j = 0; j < n; j++) {
				arr2[k][j] = ans[k][j];
			}
		}
	}

	for (int i = 0; i < n; i++) {
		for (int k = 0; k < n; k++) {
			cout << ans[i][k] << ' ';
		}
		cout << '\n';
	}

	return 0;
}

void arrMulti(int n, int y, int x)
{	
	int sum = 0;

	for (int i = 0; i < n; i++) {
		sum += arr[y][i] * arr2[i][x];
	}

	ans[y][x] = sum % 1000;
	
	return;
}

# 유의점
다시 풀기
재귀형으로 메모이제이션