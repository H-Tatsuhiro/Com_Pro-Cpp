#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    long long int c, d, a = 140, b = 170, ans = 0; cin >> c >> d;
    while (a < d) ans += max(0LL, min(b - 1, d - 1) - max(a, c) + 1), a *= 2, b *= 2;
    cout << ans << endl;
}
