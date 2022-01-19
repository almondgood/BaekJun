#include <iostream>

using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	bool num[10001] = { 0, };

	for (int i = 1; i < 10001; i++) {
		if (i < 10) {
			num[i * 2] = true;
		}
		else if (i < 100) { // 10
			int ten = (i + i / 10 + i % 10);
			num[ten] = true;
		}
		else if (i < 1000) { // 100
			int hun = (i + i / 100 + ((i % 100) / 10) + i % 10);
			num[hun] = true;
		}
		else { // 1000
			int tho = (i + i / 1000 + ((i % 1000) / 100) + ((i % 100) / 10) + i % 10); // 1000, 100, 10, 1�ڸ� ��
			if (tho > 10000) continue; // tho�� 10000�� �ʰ� �� ����
			num[tho] = true;
		}
	}

	for (int i = 1; i < 10001; i++) {
		if (!num[i]) {
			cout << i << '\n';
		}
	}

	return 0;
}