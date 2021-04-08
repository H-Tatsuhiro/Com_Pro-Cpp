#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <set>
using namespace std;
int main() {
    int n, m; cin >> n >> m;
    int ans = 0;
    vector<int> a(m, 0), b(m, 0), c(m, 0);
    for (int i = 0; i < m; i++) {
        cin >> a[i] >> b[i] >> c[i];
        a[i]--, b[i]--, c[i]--;
    }
    for (int bit = 0; bit < (1 << n); bit++) {
        set<int> S;
        bool t = false;
        for (int k = 0; k < m; k++) {
            if ((bit & (1 << a[k])) && (bit & (1 << b[k])) && (bit & (1 << c[k]))) t = true;
            if ((bit & (1 << a[k])) && (bit & (1 << b[k]))) S.insert(c[k]);
            if ((bit & (1 << a[k])) && (bit & (1 << c[k])))  S.insert(b[k]);
            if ((bit & (1 << b[k])) && (bit & (1 << c[k])))  S.insert(a[k]);
        }
        if (!t) ans = max(ans, (int)S.size());
    }
    cout << ans << endl;
}
