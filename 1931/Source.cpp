#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(const pair<int, int>& a, const pair<int, int>& b);

int main() {
	
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n;
	cin >> n;
	vector<pair<int, int>> v(n);

	for (int i = 0; i < n; i++) {
		cin >> v[i].first >> v[i].second;
	}
	sort(v.begin(), v.end());
	sort(v.begin(), v.end(), compare);

	int cnt = 0, end = 0;
	for (int i = 0; i < n; i++) {
		if (v[i].first >= end) {
			cnt++;
			end = v[i].second;
		}
	}

	cout << cnt;

	return 0;
}

bool compare(const pair<int, int>& a, const pair<int, int>& b)
{
	return a.second < b.second;
}
