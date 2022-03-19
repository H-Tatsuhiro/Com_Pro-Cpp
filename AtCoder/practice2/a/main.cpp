#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <atcoder/dsu.hpp>
using namespace atcoder;
using namespace std;
int main() {
    int n, q; cin >> n >> q;
    dsu d(n);
    for (int i = 0; i < q; i++) {
        int t, u, v; cin >> t >> u >> v;
        if (t == 0) d.merge(u, v);
        else cout << (d.same(u, v) ? 1 : 0) << endl;
    }
}
