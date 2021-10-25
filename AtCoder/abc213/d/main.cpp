#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;
int main() {
    int n; cin >> n;
    vector<vector<int>> G(n);
    for (int i = 0; i < n - 1; i++) {
        int a, b; cin >> a >> b;
        a--, b--;
        G[a].emplace_back(b), G[b].emplace_back(a);
    }
    for (int i = 0; i < n; i++) sort(G[i].begin(), G[i].end());
    vector<int> ans;
    function<void(int, int)> dfs = [&](int i, int j){
        ans.emplace_back(i + 1);
        for (int v: G[i]) {
            if (v != j) {
                dfs(v, i);
                ans.emplace_back(i + 1);
            }
        }
    };
    dfs(0, -1);
    for (int i = 0; i < ans.size(); i++) cout << ans[i] << (i == ans.size() - 1 ? '\n' : ' ');
}
