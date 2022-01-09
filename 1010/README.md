# 문제 주소
https://www.acmicpc.net/problem/1010

# 문제 이름
다리 놓기

# 코드
#include <iostream>
using namespace std;


int main() {

	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int t;
	cin >> t;

	while (t--) {
		int n, m;
		cin >> n >> m;

		int arr[30];
		for (int i = 0; i < n; i++) {
			arr[i] = m - i;
		}
		
		for (int i = 1; i <= n; i++) {
			int tmp = i;
			for (int k = 0; k < n; k++) {
			
				if (arr[k] % tmp == 0) {
					arr[k] /= tmp;
					break;
				}
				else if (tmp % 2 == 0 && arr[k] % 2 == 0) {
					while (tmp % 2 == 0 && arr[k] % 2 == 0) {
						arr[k] /= 2;
						tmp /= 2;
					}
				}
				else if (tmp && k == n - 1)
					k = 0;
			}
		}

		long long int ans = 1;
		for (int i = 0; i < n; i++) {
			ans *= arr[i];
		}

		cout << ans << '\n';

	}


	return 0;
	
}

