#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <atcoder/dsu>
using namespace atcoder;
using namespace std;
int main() {
    int n, m; cin >> n >> m;
    dsu uf(n);
    for (int i = 0; i < m; i++) {
        int a, b; cin >> a >> b;
        uf.merge(a - 1, b - 1);
    }
    int ans = 0;
    for (int i = 0; i < n; i++) ans = max(ans, uf.size(i));
    cout << ans << endl;
}
