#include <iostream>
#include <cmath>

using namespace std;

int main() {
	
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int t = 0;
	cin >> t;

	for (int i = 0; i < t; i++) {

		int x1, y1, r1, x2, y2, r2;
		fflush(stdin);
		cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;

		int r3 = pow((x2 - x1), 2) + pow((y2 - y1), 2); // 원1과 원2 사이의 거리 ^ 2
		
		int d = r1 + r2;
		int s1 = r2 > r1 ? r2 - r1 : r1 - r2;
		int s2 = r2 > r1 ? r1 - r2 : r2 - r1;
		
		if ((x1 == x2) && (y1 == y2)) { // 두 원의 중심 동일
			if (r1 == r2) { cout << -1 << '\n'; } // 합동
			else { cout << 0 << '\n'; }
		}
		else if (r3 == d * d) { cout << 1 << '\n'; } // 외접
		else if (r3 == s1 * s1) { cout << 1 << '\n'; } // 내접
		else if ((r3 < d * d) && (r3 > s1 * s1)) { 
			cout << 2 << '\n'; 
		}
		else { cout << 0 << '\n'; }

	}

	return 0;
}

/*
* 테스트 케이스
7
0 0 1 0 0 1
0 0 1 0 0 3
1 0 1 2 0 2
-1 0 1 2 0 2
1 0 2 3 0 3
2 0 1 3 0 3
-2 0 1 3 0 3
*/