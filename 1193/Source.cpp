#include <iostream>
#include <map>

using namespace std;

int main() {
    int n, count = 1;
    int a = 1, b = 1, tmp;
    bool isNumerPlus = 0;
    cin >> n;

    for (; count != n; count++) {
        if (isNumerPlus) {
            if (b == 1) {
                isNumerPlus = false;
                a++;
                continue;
            }
            a++;
            b--;
        }
        else if (isNumerPlus == false) {
            if (a == 1) {
                isNumerPlus = true;
                b++;
                continue;
            }
            a--;
            b++;

        }
    }

    cout << a << "/" << b << '\n';


    return 0;
}