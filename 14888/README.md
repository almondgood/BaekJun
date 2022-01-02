# 문제 주소
https://www.acmicpc.net/problem/14888

# 문제 이름
연산자 끼워넣기

# 코드
#include <iostream>
#include <cmath>
using namespace std;

void result(int cnt);

int arr[11] = { 0, };
int oper[4] = { 0, };
int oper2[11] = { 0, };
int n = 0, mx = 0, mn = 0;
bool isFirst = true;

int main() {
	
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	for (int i = 0; i < 4; i++) {
		cin >> oper[i];
	}

	result(0);
	
	cout << mx << '\n' << mn;

	return 0;
}

void result(int cnt)
{
	if (cnt == n - 1) {
		int sum = arr[0];
		for (int i = 1; i < n; i++) {
			if (oper2[i] == 0) 
				sum += arr[i];
			else if (oper2[i] == 1) 
				sum -= arr[i];
			else if (oper2[i] == 2) 
				sum *= arr[i];
			else 
				sum /= arr[i];
		}
		if (isFirst) {
			mx = sum;
			mn = sum;
			isFirst = false;
		}
		else {
			mx = mx > sum ? mx : sum;
			mn = mn <= sum ? mn : sum;
		}
		cnt--;
		return;
	}
	else {
		for (int i = 0; i < 4; i++) {
			if (oper[i]) {
				oper[i]--;
				cnt++;
				oper2[cnt] = i;
				result(cnt);
				cnt--;
				oper[i]++;
			}
			}
		}
	
	return;
}

# 유의점
백트래킹 & 브루트포스

void f(int num,int sum,int b1,int b2, int b3, int b4){
    if(num ==n){
        if(sum>max1) max1 = sum;
        if(sum<min1) min1 = sum;
        return;
    }  
    if(b1 != 0) f(num+1,sum+a[num],b1-1,b2,b3,b4);
    if(b2 != 0) f(num+1,sum-a[num],b1,b2-1,b3,b4);
    if(b3 != 0) f(num+1,sum*a[num],b1,b2,b3-1,b4);
    if(b4 != 0) f(num+1,sum/a[num],b1,b2,b3,b4-1);
    return;
} 
처럼 연산자간의 관계를 통해 for문을 사용하지 않고 풀이 가능