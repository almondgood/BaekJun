# 문제 주소
https://www.acmicpc.net/problem/18870

# 문제 이름
좌표 압축

# 코드
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

# 유의점
좌표 압축이란, 수직선 위의 좌표 a, b 사이의 점 개수를 구할 때, 
a, b의 값이 비효율적으로 클 경우 중간의 필요없는 구간을 압축하는 것을 말한다.

a = 1억, b = 10억 이고, 점이 각각 3억, 7억에 찍혀있을 때, 
0 ~ 1억, 1억 ~ 3억, 3억 ~ 7억, 7억 ~ 10억의 필요없는 구간을 제거하고
유의미한 점 4개, 즉, 0, 1, 2, 3에 점이 찍혀있다고 보는 것이다.

1억 ~ 10억 사이의 점 개수를 구하든, 0 ~ 3 사이의 점 개수를 구하든 같은 결과가 나올 것이므로
불필요한 구간은 생각하지 않고 유의미한 부분만을 남기면 효율적으로 계산할 수 있다.