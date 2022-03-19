#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <atcoder/dsu>
using namespace atcoder;
using namespace std;
int main() {
    int n, m; cin >> n >> m;
    vector<int> a(m, 0), b(m, 0);
    for (int i = 0; i < m; i++) cin >> a[i] >> b[i], a[i]--, b[i]--;
    int ans = 0;
    for (int i = 0; i < m; i++) {
        dsu d(n);
        for (int j = 0; j < m; j++) if (i != j) d.merge(a[j], b[j]);
        if (d.groups().size() != 1) ans++;
    }
    cout << ans << endl;
}
