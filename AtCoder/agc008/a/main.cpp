#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    long long int x, y; cin >> x >> y;
    long long int ans = 10e15;
    if (x <= y) ans = min(ans, y - x);
    if (-x <= y) ans = min(ans, y + x + 1);
    if (x <= -y) ans = min(ans, - y - x + 1);
    if (-x <= -y) ans = min(ans, - y + x + 2);
    cout << ans << endl;
}
