#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n, m; cin >> n >> m;
    vector<long long int> a(n, 0), b(m, 0);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < m; i++) cin >> b[i];
    long long int ans = 2 * 10e9 + 1;
    sort(a.begin(), a.end()); sort(b.begin(), b.end());
    for (int i = 0; i < n; i++) {
        auto s = lower_bound(b.begin(), b.end(), a[i]), t = lower_bound(b.begin(), b.end(), a[i], [&](long long int p, long long int q){return (p < q);});
        if (s != b.end() && t != b.end()) ans = min(ans, min(abs(a[i] - *s), abs(a[i] - *t)));
        else if (t != b.end()) ans = min(ans, abs(a[i] - *t));
        else if (s != b.end()) ans = min(ans, abs(a[i] - *s));
    }
    for (int i = 0; i < m; i++) {
        auto s = lower_bound(a.begin(), a.end(), b[i]), t = lower_bound(a.begin(), a.end(), b[i], [&](long long int p, long long int q){return (p < q);});
        if (s != a.end() && t != a.end()) ans = min(ans, min(abs(b[i] - *s), abs(b[i] - *t)));
        else if (t != a.end()) ans = min(ans, abs(b[i] - *t));
        else if (s != a.end())ans = min(ans, abs(b[i] - *s));
    }
    cout << ans << endl;
}
