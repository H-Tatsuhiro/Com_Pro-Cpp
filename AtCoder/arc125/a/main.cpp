#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n, m; cin >> n >> m;
    vector<int> s(n, 0), t(m, 0);
    for (int i = 0; i < n; i++) cin >> s[i];
    for (int i = 0; i < m; i++) cin >> t[i];
    int ans = 0, p = s[0], inf = 1000000007;
    for (int i = 0; i < m; i++) {
        if (p != t[i]) ans++;
        p = t[i];
    }
    if (ans) {
        int q = inf;
        for (int i = 0; i < n; i++) if (s[i] != s[0]) q = min(q, i);
        for (int i = n - 1; i >= 0; i--) if (s[i] != s[0]) q = min(q, n - i);
        if (q == inf) {
            cout << -1 << endl;
            return 0;
        }
        ans += q - 1;
    }
    cout << ans + m << endl;
}
