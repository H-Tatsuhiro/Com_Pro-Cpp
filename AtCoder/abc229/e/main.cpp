#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <atcoder/dsu.hpp>
using namespace std;
using namespace atcoder;
int main() {
    int n, m; cin >> n >> m;
    vector<vector<int>> G(n + 1);
    dsu d(n + 1);
    for (int i = 0; i < m; i++) {
        int a, b; cin >> a >> b;
        G[a].push_back(b);
    }
    vector<int> ans = {0};
    long long int cnt = 0;
    for (int i = n; i >= 2; i--) {
        cnt++;
        for (auto j : G[i]) {
            if (!d.same(i, j)) {
                d.merge(i, j);
                cnt--;
            }
        }
        ans.push_back(cnt);
    }
    reverse(ans.begin(), ans.end());
    for (int i = 0; i < ans.size(); i++) cout << ans[i] << endl;
}
