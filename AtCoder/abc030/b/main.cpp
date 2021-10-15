#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n, m; cin >> n >> m;
    n %= 12;
    long double a = n * 30 + (0.5 * m), b = m * 6;
    long double ans = abs(a - b);
    cout << min(ans, 360 - ans) << endl;
}
