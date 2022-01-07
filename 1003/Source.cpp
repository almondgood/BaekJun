#include <iostream>
using namespace std;

int arr1[41] = { 0, 1, 1, };

void fibonacci(int n) {

	if (n < 2)
		return;
	else if (!arr1[n - 1])
		fibonacci(n - 1);
		arr1[n] = arr1[n - 1] + arr1[n - 2];
	
	return;
};

int main() {
	
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	
	int n;
	cin >> n;

	while (n--) {
		int input = 0;
		cin >> input;
		fibonacci(input);

		if (input == 0)
			cout << arr1[1] << ' ' << arr1[0] << '\n';
		else 
			cout << arr1[input - 1] << ' ' << arr1[input] << '\n';
	}
	return 0;
}

