# 문제 주소
https://www.acmicpc.net/problem/10814

# 문제 이름
나이순 정렬

# 코드
#include <iostream>
#include <map>

using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n;
	cin >> n;

	multimap<int, string> member;

	while (n--) {
		int age = 0;
		string name = "";
		cin >> age >> name;

		member.insert(pair<int, string>(age, name));
	}
	
	for (auto it = member.begin(); it != member.end(); it++) {
		cout << it->first << ' ' << it->second << '\n';
	}

	return 0;
}

# 유의점
map 헤더의 multimap활용
map은 파이썬의 dict와 유사하며, key값에 대응하는 value의 값이 존재한다.
key : value / 1 : 하나, 사과 ; 빨간색 , ... 등
