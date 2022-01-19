#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n = 0;
	cin >> n;

	vector<int> v, ans;

	while (n--) {
		int x = 0;
		cin >> x;
		v.push_back(x);
		ans.push_back(x);
	}

	sort(v.begin(), v.end());
	v.erase(unique(v.begin(), v.end()), v.end());

	for (int i = 0; i < ans.size(); i++) {
		cout << lower_bound(v.begin(), v.end(), ans[i]) - v.begin() << ' ';
	}

	return 0;
}