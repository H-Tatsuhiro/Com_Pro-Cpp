#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <iomanip>
using namespace std;
int main() {
    int n; cin >> n;
    vector<long double> a(n, 0), b(n, 0);
    for (int i = 0; i < n; i++) cin >> a[i] >> b[i];
    long double t = 0, ans = 0;
    for (int i = 0; i < n; i++) t += a[i] / b[i];
    t /= 2;
    for (int i = 0; i < n; i++) {
        ans += min(a[i], t * b[i]);
        t -= min(a[i] / b[i], t);
    }
    cout << fixed << setprecision(10) << ans << endl;
}
