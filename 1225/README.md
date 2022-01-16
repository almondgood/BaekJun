# 코드
#include <iostream>
#include <vector>
using namespace std;

int main() {
	string A, B;
	cin >> A >> B;
	long long int sum = 0;
	for (int i = 0; i < A.length(); i++) {
		for (int k = 0; k < B.length(); k++) {
			sum += (A[i] - '0') * (B[k] - '0');
		}
	}
		
	cout << sum;
	return 0;

}