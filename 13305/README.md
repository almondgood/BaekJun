# 문제 주소
https://www.acmicpc.net/problem/13305

# 문제 이름
주유소

# 코드
#include <iostream>

using namespace std;

int main() {
	
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n = 0;
	long long int spend = 0;
	int oil = 0;
	
	cin >> n;

	int* dis = new int[n];

	for (int i = 0; i < n - 1; i++) {
		cin >> dis[i];
	}
	
	for (int i = 0; dis[n - 2] != 0; i++) {
		int tmp = 0;
		cin >> tmp;
	
		if (i == 0 || tmp < oil)
			oil = tmp;
		
		spend += (long long)oil * (long long)dis[i];
		dis[i] = 0;
	}

	cout << spend;

	

	return 0;
}

# 유의점
그리디 알고리즘
현재 기름 가격보다 더 싼 가격의 기름이 등장하기 전까지 거리 * 기름 가격을 계속 더한다.

int* dis = new int(n);
...
delete[] dis;
부분에서 
C6279 : <variable>이(가) 스칼라 new를 사용해 할당되었지만 배열 delete []로 삭제되었습니다. 경고가 발생했다.
new int(n)으로 n만큼의 배열을 할당해주어 delete[]를 사용했지만 실제로 실행시켰을 때도 오류가 발생하였고, 이해가 잘 되지 않는다. 한번 찾아봐야겠다.