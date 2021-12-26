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