#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    long long int n, k, x, ans = 0, m = 0; cin >> n >> k >> x;
    vector a(n, 0);
    for (int i = 0; i < n; i++) cin >> a[i], ans += a[i], m += a[i] / x, a[i] %= x;
    m = min(m, k), ans -= x * m, k -= m;
    sort(a.begin(), a.end(), greater<int>());
    for (int i = 0; i < n && k > 0; i++, k--) ans -= a[i];
    cout << ans << endl;
}
