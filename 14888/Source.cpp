#include <iostream>
#include <cmath>
using namespace std;

void result(int cnt);

int arr[11] = { 0, };
int oper[4] = { 0, };
int oper2[11] = { 0, };
int n = 0, mx = 0, mn = 0;
bool isFirst = true;

int main() {
	
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	for (int i = 0; i < 4; i++) {
		cin >> oper[i];
	}

	result(0);
	
	cout << mx << '\n' << mn;

	return 0;
}

void result(int cnt)
{
	if (cnt == n - 1) {
		int sum = arr[0];
		for (int i = 1; i < n; i++) {
			if (oper2[i] == 0) 
				sum += arr[i];
			else if (oper2[i] == 1) 
				sum -= arr[i];
			else if (oper2[i] == 2) 
				sum *= arr[i];
			else 
				sum /= arr[i];
		}
		if (isFirst) {
			mx = sum;
			mn = sum;
			isFirst = false;
		}
		else {
			mx = mx > sum ? mx : sum;
			mn = mn <= sum ? mn : sum;
		}
		cnt--;
		return;
	}
	else {
		for (int i = 0; i < 4; i++) {
			if (oper[i]) {
				oper[i]--;
				cnt++;
				oper2[cnt] = i;
				result(cnt);
				cnt--;
				oper[i]++;
			}
			}
		}
	
	return;
}
