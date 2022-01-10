#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>
#include <vector>
#include <sstream>
using namespace std;

void swap(string& array);

int main() {
	string binary, binA, binB;
	char binarySum[81] = { 0, };
	int i = 0, bigger = 0;

	getline(cin, binary);
	stringstream array(binary);
	array >> binA >> binB;

	for (; binA[0] == '0';) swap(binA);
	for (; binB[0] == '0';) swap(binB);

	bigger = binA.length() > binB.length() ? binA.length() : binB.length();

	for (auto itA = binA.rbegin(); itA != binA.rend(); itA++, i++) { // 함수화 가능
		if (*itA == '1') binarySum[i]++;
	}
	i = 0;
	for (auto it = binB.rbegin(); it != binB.rend(); it++, i++) {
		if (*it == '1') binarySum[i]++;
	}

	for (i = 0; i < bigger; i++) { // 함수화 가능
		if (binarySum[i] == 3) {
			binarySum[i] = 1;
			binarySum[i + 1]++;
			if (i == bigger - 1) bigger++;
		}
		else if (binarySum[i] == 2) {
			binarySum[i] = 0;
			binarySum[i + 1]++;
			if (i == bigger - 1) bigger++;
		}
	}
	for (i = bigger - 1; i >= 0; i--) {
		cout << (int)binarySum[i];
	}

	return 0;
}

void swap(string& array) {
	for (int i = 0; i < array.length(); i++) {
		array[i] = array[i + 1];
	}
	if (array.length() != 1) array.resize(array.length() - 1);
}