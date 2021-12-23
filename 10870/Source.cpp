#include <iostream>
using namespace std;

int fibo(int ans, int n);
int main()
{
	int n = 0;
	cin >> n;
	cout << fibo(0, n);
	return 0;
}

int fibo(int ans, int n){
    
    if(n < 2) {return n;}
    else {
        ans += fibo(ans, n - 1) + fibo(ans, n - 2);
    }
    return ans;
}
