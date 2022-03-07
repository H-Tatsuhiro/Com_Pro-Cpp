#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n; cin >> n;
    vector<int> a(n, 0), b(n, 0), c(n, 0);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];
    for (int i = 0; i < n; i++) cin >> c[i];
    long long int ans = 0;
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    sort(c.begin(), c.end());
    for (int i = 0; i < n; i++) {
        auto x = lower_bound(a.begin(), a.end(), b[i]) - a.begin(), y = c.end() - upper_bound(c.begin(), c.end(), b[i]);
        ans += x * y;
    }
    cout << ans << endl;
}
