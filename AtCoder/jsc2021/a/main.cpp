#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    long double x, y, z; cin >> x >> y >> z;
    long double a = y / x;
    int ans = -1;
    for (int i = 0; i <= 10e5; i++) {
        long double b = i / z;
        if (a > b) ans = i;
        else break;
    }
    cout << ans << endl;
}