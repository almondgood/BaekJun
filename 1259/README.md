# 코드
#include <iostream>
#define LENGTH input.length()
using namespace std;
int main() {
	string input;
	bool isPalindrome = false;

	while (true) {
		
		cin >> input;
		
		if (input[0] == '0') break;

		if (LENGTH % 2) { // 홀수개
			if (LENGTH == 1) isPalindrome = true; // 1개 입력
			for (int i = 0; i < LENGTH / 2; i++) {
				if (input[i] == input[LENGTH - i - 1]) isPalindrome = true;
				else {
					isPalindrome = false;
					break;
				}
			}
		}
		else { // 짝수개
			for (int i = 0; i < LENGTH / 2; i++) {
				if (input[i] == input[LENGTH - i - 1]) isPalindrome = true;
				else {
					isPalindrome = false;
					break;
				}
			}
		}

		if (isPalindrome) cout << "yes" << '\n';
		else cout << "no" << '\n';
	}



	return 0;

}