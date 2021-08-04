#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n, d, h; cin >> n >> d >> h;
    vector<long double> a(n, 0), b(n, 0);
    for (int i = 0; i < n; i++) cin >> a[i] >> b[i];
    long double ans = 0;
    for (int i = 0; i <= n; i++) {
        long double x = (h - b[i]) / (d - a[i]), y = b[i] - (a[i] * x);
        ans = max(ans, y);
    }
    cout << ans << endl;
}
