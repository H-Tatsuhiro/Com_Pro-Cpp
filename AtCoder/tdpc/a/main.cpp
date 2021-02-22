#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n; cin >> n;
    vector<int> p(n + 1, 0);
    vector<vector<bool>> dp(n + 1, vector<bool>(10e6, false));
    dp[0][0] = true;
    int m = 0;
    for (int i = 1; i <= n; i++) cin >> p[i];
    for (int i = 1; i <= n; i++) {
        int tmp = 0;
        for (int j = 0; j <= m; j++) {
            if (dp[i - 1][j]) {
                dp[i][j + p[i]] = true;
                dp[i][j] = true;
                tmp = max(tmp, j + p[i]);
            }
        }
        m = tmp, tmp = 0;
    }
    int ans = 0;
    for (auto q : dp[n]) if (q) ans++;
    cout << ans << endl;
}
