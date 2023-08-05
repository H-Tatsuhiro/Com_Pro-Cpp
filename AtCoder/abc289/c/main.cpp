#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n, m; cin >> n >> m;
    vector<int> c(m, 0);
    vector<vector<int>> a(m);
    for (int i = 0; i < m; i++) {
        cin >> c[i];
        a[i].resize(c[i]);
        for (int j = 0; j < c[i]; j++) cin >> a[i][j];
    }
    int ans = 0;
    for (int bit = 0; bit < (1 << m); bit++) {
        vector<bool> b(n, false);
        for (int i = 0; i < m; i++) if (bit & (1 << i)) for (int j = 0; j < c[i]; j++) b[a[i][j] - 1] = true;
        bool t = true;
        for (int i = 0; i < n; i++) if (!b[i]) t = false;
        if (t) ans++;
    }
    cout << ans << endl;
}


