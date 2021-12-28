# 문제 주소
https://www.acmicpc.net/problem/4949

# 문제 이름
균형잡힌 세상

# 코드
#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main() {
	string str = "";
	
	
	while (true) { // n번

		stack<char> s;
		getline(cin, str);
		bool isBalance = true;
		if (str == ".")	break;
		
		for (int i = 0; i < str.length(); i++) {
			if (str[i] == '(' || str[i] == '[') s.push(str[i]);

			else if (str[i] == ')') {
				if (!s.empty() && s.top() == '(') s.pop();
				else isBalance = false;
			}
			else if (str[i] == ']') {
				if (!s.empty() && s.top() == '[') s.pop();
				else isBalance = false;
			}
			if (!isBalance) break;
		}
		
		if (isBalance && s.empty()) cout << "yes" << '\n';
		else cout << "no" << '\n';

	}
	return 0;
}

# 유의점
스택 활용
cin으로 한 단어씩 받는 것 보다 문장 전체를 getline()으로 받는 것이 편하다.

1. 괄호가 등장할 경우 스택에 push한다.
2. ( 과 ), [ 과 ]이 서로 짝지어져야 한다는 조건에 의해 ) 또는 ] 이 등장하기 전까지 ( [ 이 나와야 한다. (스택에 ( 과 [ 이 먼저 쌓이다가 ) 또는 ] 이 등장하면 판별 시작)
3. 쌍이 이루어질 경우 스택을 pop한다. 
4. 이루어지지 않으면 균형이 맞지않은 것이므로 반복문 탈출, 답을 출력한다.
5. ) 또는 ] 이 먼저 등장하는 경우를 예외처리한다.

