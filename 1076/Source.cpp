#include <iostream>

using namespace std;

int value(string& a);
int times(string& a);

int main() {
	string A, B, C;
	cin >> A >> B >> C;
	long long int result = (value(A) * 10 + value(B)) * (long long)times(C);

	cout << result;
	return 0;
}

int value(string& a) {
	if (a == "black") return 0;
	else if (a == "brown") return 1;
	else if (a == "red") return 2;
	else if (a == "orange") return 3;
	else if (a == "yellow") return 4;
	else if (a == "green") return 5;
	else if (a == "blue") return 6;
	else if (a == "violet") return 7;
	else if (a == "grey") return 8;
	else return 9;
}

int times(string& a) {
	if (a == "black") return 1;
	else if (a == "brown") return 10;
	else if (a == "red") return 100;
	else if (a == "orange") return 1000;
	else if (a == "yellow") return 10000;
	else if (a == "green") return 100000;
	else if (a == "blue") return 1000000;
	else if (a == "violet") return 10000000;
	else if (a == "grey") return 100000000;
	else return 1000000000;
}