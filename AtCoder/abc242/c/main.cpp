#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    long long int n; cin >> n;
    long long int ans = 0, mod = 998244353;
    vector<vector<int>> dp(n + 1, vector<int>(100, 0));
    for (int i = 1; i <= 9; i++) dp[0][i] = 1;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 1; j <= 9; j++) {
            for (int k = 1; k <= 9; k++) {
                if (abs(j - k) <= 1) {
                    dp[i + 1][k] += dp[i][j];
                    dp[i + 1][k] %= mod;
                }
            }
        }

    }
    for (int i = 1; i <= 9; i++) ans += dp[n - 1][i], ans %= mod;
    cout << ans << endl;
}
