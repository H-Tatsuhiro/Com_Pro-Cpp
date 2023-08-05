#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <atcoder/dsu>
using namespace atcoder;
using namespace std;
int main() {
    int n, m; cin >> n >> m;
    vector<vector<int>> G(n);
    dsu d(n);
    for (int i = 0; i < m; i++) {
        int a, b; cin >> a >> b;
        G[a - 1].push_back(b - 1), G[b - 1].push_back(a - 1);
        d.merge(a - 1, b - 1);
    }
    bool ans = true;
    int x = 0;
    for (int i = 0; i < n; i++) if (G[i].size() == 1) x++;
    if (x != 2) ans = false;
    for (int i = 0; i < n; i++) if (G[i].size() > 2) ans = false;
    if (d.groups().size() > 1) ans = false;
    cout << (ans ? "Yes" : "No") << endl;
}


