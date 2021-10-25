#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <atcoder/dsu>
using namespace atcoder;
using namespace std;
int main() {
    int n, m; cin >> n >> m;
    vector<long long int> a(n, 0), b(n, 0);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];
    dsu uf(n);
    for (int i = 0; i < m; i++) {
        int x, y; cin >> x >> y;
        x--, y--;
        uf.merge(x, y);
    }
    vector<long long int> p(n, 0), q(n, 0);
    for (int i = 0; i < n; i++) {
        int r = uf.leader(i);
        p[r] += a[i], q[r] += b[i];
    }
    bool t = true;
    for (int i = 0; i < n; i++) {
        int r = uf.leader(i);
        if (p[r] != q[r]) t = false;
    }
    cout << (t ? "Yes" : "No") << endl;
}
