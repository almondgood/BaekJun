# 문제 주소
https://www.acmicpc.net/problem/11729

# 문제 이름
하노이의 탑

# 코드 
#include <iostream>
#include <cmath>

using namespace std;

int hanoi(int n, int from, int to);

int main() {

	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n = 0;

	cin >> n;

	int count = pow(2, n);
	cout << count - 1 << '\n';

	hanoi(n, 1, 3);

	return 0;
}

int hanoi(int n, int from, int to) {
	if (n == 1) {
		cout << from << ' ' << to << '\n';
		return 0;
	}

	hanoi(n - 1, from, 6 - from - to); 
	cout << from << ' ' << to << '\n';
	hanoi(n - 1, 6 - from - to, to);

	return 0;
}

# 유의점
pow()함수는 double형으로 리턴

hanoi(3)

1 A>C    => hanoi(2)
2 A>B
1 C>B
---------
3 A>C
---------
1 B>A	=> hanoi(2)
2 B>C
1 A>C

A에서 출발해 n-1번째까지의 원반은 B를 거친 뒤, => hanoi(2)
n번째 원반을 C로 옮기고,  =>hanoi(3)
n-1번째까지의 원반은 다시 B에서 출발해 C에 도착한다. => hanoi(2)

출발지(A)와 목적지(C)를 인자로 설정해주어야 하고, 경유지(B)는 인자로 설정해도 되고 안해도 된다.
hanoi(int N, int FROM, int TO, int VIA);
