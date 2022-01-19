<<<<<< < HEAD
#include <iostream>
#include <stack>

using namespace std;

int main() {
	
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int n = 0;
	stack<int> s;

	cin >> n;

	for (int i = n; i > 0; i++) {
		s.push(i);
	}

	for (int i = 0; i < n; i++) {
		cout << s[i];
	}



	return 0;
}
=======

int fibo(int ans, int n){
    
    if(n < 2) {return n;}
    else {
        ans += fibo(ans, n - 1) + fibo(ans, n - 2);
    }
    return ans;
}
>>>>>>> 4c7d7d1a9bd2abf7c4b40df35086f3db93b8da4e
