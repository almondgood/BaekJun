#include <iostream>

using namespace std;

int main() {
	
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n = 0;
	long long int spend = 0;
	int oil = 0;
	
	cin >> n;

	int* dis = new int[n];

	for (int i = 0; i < n - 1; i++) {
		cin >> dis[i];
	}
	
	for (int i = 0; dis[n - 2] != 0; i++) {
		int tmp = 0;
		cin >> tmp;
	
		if (i == 0 || tmp < oil)
			oil = tmp;
		
		spend += (long long)oil * (long long)dis[i];
		dis[i] = 0;
	}

	cout << spend;

	

	return 0;
}
