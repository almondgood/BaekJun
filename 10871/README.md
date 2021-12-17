# 문제 주소
https://www.acmicpc.net/problem/10871

# 문제 이름
X보다 작은 수 

# 코드

#include <iostream>

using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int N, X;
	cin >> N >> X;

	int* pa = new int[N];

	for (int i = 0; i < N; i++) {
		cin >> pa[i];
		if (pa[i] < X) { cout << pa[i] << ' '; }
	}

	delete[] pa;

	return 0;
}

# 유의점
ios::sync_with_stdio(false), cin.tie(nullptr) 을 사용하면 수행속도를 향상시킬 수 있다.
ios::sync_with_stdio(false)
의미 : C++의 버퍼와 C의 버퍼의 동기화를 해제한다. 동기화되어 있으면 C++ 코드와 C 코드를 혼용하여 사용해도 의도한 대로 동작한다. 따라서 multi-threading을 사용할 때 각각의 출력 연산을 사용해도 충돌이 일어나지 않는다.

장점 : 각 스트림이 각각의 버퍼로 독립적으로 사용되기 때문에 연산이 줄고, 입출력 속도를 향상시킨다. 

단점 : 독립적으로 사용되기 때문에 multi-threading시 충돌이 발생할 수 있고, 의도한 입출력 순서를 보장하지 않는다.


cin.tie(nullptr)
의미 : cin과 cout을 untie한다. cin과 cout의 stream이 동기화되어 있어 한 스트림에서 다른 스트림이 작업을 요청하게 되면, 버퍼를 flush(데이터를 내보내다(가져오다) aka 비우다)한다. 

장점 : 입출력의 변환이 빈번하게 이루어지는 경우 untie를 하면 입출력이 더욱 빨라지게 된다.

단점 : untie를 하면 출력이 flush되지 않고 입력을 받는 경우가 있을 수 있다.
ex) std::cout << "Enter name";
     std::cin >> name; 을 했을 때 Enter name이 출력되지 않고 입력이 요구 될 수 있다.