#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <atcoder/modint>
using namespace std;
using namespace atcoder;
using mint = modint998244353;
int main() {
    int n, m, k, s, t, x; cin >> n >> m >> k >> s >> t >> x, s--, t--, x--;
    vector<pair<int, int>> E(m);
    for (int i = 0; i < m; i++) {
        int a, b; cin >> a >> b, a--, b--;
        E[i].first = a, E[i].second = b;
    };
    vector dp(k + 1, vector(n, array<mint, 2>{0, 0}));
    dp[0][s][0] = 1;
    for (int i = 0; i < k; i++) {
        for (auto [v, w] : E) for (int j = 0; j < 2; j++) {
                dp[i + 1][v][j ^ (v == x)] += dp[i][w][j];
                dp[i + 1][w][j ^ (w == x)] += dp[i][v][j];
        }
    }
    cout << dp[k][t][0].val() << endl;
}
