#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n, x, y, ans = 0; cin >> n >> x >> y;
    for (int i = 1; i <= n; i++) if (i % x == 0 || i % y == 0) ans++;
    cout << ans << endl;
}
