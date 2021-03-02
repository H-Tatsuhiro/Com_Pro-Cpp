#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int a, b, c, d; cin >> a >> b >> c >> d;
    int ans = 3;
    if (a == c && b == d) ans = 0;
    else if (a + b == c + d || a - b == c - d || abs(a - c) + abs(b - d) <= 3) ans = 1;
    else if ((a + b + c + d) % 2 == 0 || abs(a - c) + abs(b - d) <= 6 || abs((a - b) - (c - d)) <= 3 || abs((a + b) - (c + d)) <= 3) ans = 2;
    cout << ans << endl;
}
