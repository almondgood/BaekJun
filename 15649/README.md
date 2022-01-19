# 문제 주소
https://www.acmicpc.net/problem/15649

# 문제 이름
N과 M (1)

# 코드
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
		cnt--;
		return;
	}
	
	for (int i = 1; i <= n; i++) {
		if (!isVisited[i]) {
			// add to arr, next num(recursion)
			cnt++;
			arr[cnt] = i;
			isVisited[i] = true;
			bt(cnt);
			cnt--;
			isVisited[i] = false;
		}
	}

	return;
}

# 유의점
백트래킹 : 해를 얻을 수 있는 가능한 모든 방법을 탐색하는 방식, 크게 DFS와 BFS가 사용됨.
(브루트포스 알고리즘은 무차별적으로 모든 방법을 탐색하는 것에 비해 백트래킹은 필요없는 방법은 탐색하지 않는다는 차이점이 있다)
DFS(Depth-First Search) 깊이 우선 탐색 : 여러 가지(노드)가 있을 때, 맨 처음 가지부터 탐색, 그 뒤의 가지들도 맨 처음 가지를 따라 우선 탐색하는 방법
BFS(Breadth-First Search) 너비 우선 탐색 : 여러 가지(노드)가 있을 때, 첫 번째 레벨에 있는 가지들을 탐색하고, 그 뒤의 가지들도 같은 레벨의 가지먼저 탐색하는 방법

int 배열과 bool 배열을 하나씩 선언하고, int 배열에는 답이 되는 값들을 저장, bool 배열에는 한번이라도 저장되었던 값인지 판단한다.
