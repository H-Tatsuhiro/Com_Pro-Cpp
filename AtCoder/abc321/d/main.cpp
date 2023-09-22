#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    long long int n, m, p; cin >> n >> m >> p;
    vector<long long int> a(n, 0), b(m, 0);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < m; i++) cin >> b[i];
    sort(b.begin(), b.end());
    vector<long long int> c(m + 1, 0);
    for (int i = 1; i <= m; i++) c[i] = c[i - 1] + b[i - 1];
    long long int ans = 0;
    for (int i = 0; i < n; i++) {
        auto it = upper_bound(b.begin(), b.end(), p - a[i]);
        if (it == b.end()) ans += c[m] + a[i] * m;
        else {
            int d = distance(b.begin(), it), dd = distance(it, b.end());
            ans += c[d] + a[i] * d + dd * p;
        }
    }
    cout << ans << endl;
}


