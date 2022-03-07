#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n, q; cin >> n >> q;
    vector<long long int> a(n, 0), b(n, 0);
    for (int i = 0; i < n; i++) cin >> a[i];
    long long int ans = 0;
    for (int i = 1; i < n; i++) b[i] = a[i] - a[i - 1], ans += abs(b[i]);
    for (int i = 0; i < q; i++) {
        int l, r, v; cin >> l >> r >> v;
        long long int bef = abs(b[l - 1]) + abs(b[r]);
        b[l - 1] += (l > 1 ? v : 0), b[r] -= (r < n ? v : 0);
        long long int aft = abs(b[l - 1]) + abs(b[r]);
        ans += aft - bef;
        cout << ans << endl;
    }
}
