#include <iostream>

using namespace std;

void bt(int cnt);

int n, m;
int arr[9] = { 0, };
bool isVisited[9] = { false, };

int main() {

	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	cin >> n >> m;

	bt(0);

	return 0;
}

void bt(int cnt)
{
	if (cnt == m) {
		// print after, return
		for (int i = 1; i <= m; i++) {
			cout << arr[i] << ' ';
		}
		cout << '\n';
		
		return;
	}
	
	for (int i = 1; i <= n; i++) {
		if (!isVisited[i]) {
			// add to arr, next num(recursion), cnt++
			cnt++;
			arr[cnt] = i;
			isVisited[i] = true;
			bt(cnt);
			cnt--;
			cnt--;
			isVisited[i] = false;
		}
	}

	return;
}
