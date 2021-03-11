#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n, x, m;
    cin >> n >> x >> m;
    vector<int> l(m, 0), r(m, 0), s(m, 0);
    for (int i = 0; i < m; i++) cin >> l[i] >> r[i] >> s[i];
    int u = 1;
    for (int i = 0; i < n; i++) u *= (x + 1);
    int mx = 0;
    for (int i = 0; i < u; i++) {
        vector<int> a(7, 0);
        int t = i;
        for (int j = n; j >= 1;j--) {
            a[j] = t % (x + 1);
            t /= (x + 1);
        }
        for (int j = 1; j <= n; j++) a[j] += a[j-1];
        bool g = 1;
        for (int j = 0; j < m; j++) if (a[r[j]] - a[l[j] - 1] != s[j]) g = 0;
        if (g) {
            if (mx < a[n]) mx = a[n];
        }
    }
    for (int i = 0; i < u; i++) {
        vector<int> a(7, 0);
        int t = i;
        for (int j = n; j >= 1; j--) {
            a[j] = t % (x + 1);
            t /= (x + 1);
        }
        for (int j = 1; j <= n; j++) a[j] += a[j-1];
        bool g = 1;
        for (int j = 0; j < m; j++) if (a[r[j]] - a[l[j]-1] != s[j]) g = 0;
        if (g && a[n] == mx) {
            for (int j = 1; j <= n; j++) printf("%d%c", a[j] - a[j-1] , j < n ? ' ':'\n');
            return 0;
        }
    }
    cout << -1 << endl;
    return 0;
}

