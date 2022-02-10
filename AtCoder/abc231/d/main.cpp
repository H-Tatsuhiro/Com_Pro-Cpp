#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <atcoder/dsu.hpp>
using namespace atcoder;
using namespace std;
int main() {
    int n, m; cin >> n >> m;
    vector<vector<int>> G(n);
    dsu dsu(n);
    bool t = true;
    for (int i = 0; i < m; i++) {
        int a, b; cin >> a >> b;
        a--, b--;
        G[a].push_back(b);
        G[b].push_back(a);
        if (dsu.leader(a) == dsu.leader(b)) t = false;
        dsu.merge(a, b);
    }
    for (int i = 0; i < n; i++) if (G[i].size() >= 3) t = false;
    cout << (t ? "Yes" : "No") << endl;
}


