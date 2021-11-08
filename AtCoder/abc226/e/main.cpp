#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n, m; cin >> n >> m;
    vector<vector<int>> G(n);
    for (int i = 0; i < m; i++) {
        int u, v; cin >> u >> v;
        G[u - 1].push_back(v - 1), G[v - 1].push_back(u - 1);
    }
    long long int MOD = 998244353;
    long long int ans = 1;
    vector<bool> seen(n, false);
    int x = 0, y = 0;
    function<void(int)> dfs = [&](int p){
        seen[p] = true, x++, y += G[p].size();
        for (int j = 0; j < G[p].size(); j++) if (!seen[G[p][j]]) dfs(G[p][j]);
        return;
    };
    for (int i = 0; i < n; i++) {
        if (!seen[i]) {
            x = 0, y = 0;
            dfs(i);
            ans = (y == x * 2 ? (ans * 2) % MOD : 0);
        }
    }
    cout << ans << endl;
}
