#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <atcoder/dsu>
using namespace std;
using namespace atcoder;
int main() {
    int n, m; cin >> n >> m;
    dsu d(n);
    int ans = 0;
    for (int i = 0; i < m; i++) {
        int a, b; cin >> a >> b, a--, b--;
        if (d.same(a, b)) ans++;
        else d.merge(a, b);
    }
    cout << ans << endl;
}


