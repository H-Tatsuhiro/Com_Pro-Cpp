#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int x, y, a = 0, b = 0;
    cin >> x >> y;
    for (int i = 1; i <= sqrt(x); i++) {
        if (x % i == 0) {
            if (i == x / i) a++;
            else a += 2;
        }
    }
    for (int i = 1; i <= sqrt(y); i++) {
        if (y % i == 0) {
            if (i == y / i) b++;
            else b += 2;
        }
    }
    if (a > b) cout << 'X' << endl;
    else if (a < b) cout << 'Y' << endl;
    else cout << 'Z' << endl;
}