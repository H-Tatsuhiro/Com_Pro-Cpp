#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    long long int n; cin >> n;
    vector<long long int> a(n, 0);
    for (int i = 0; i < n; i++) cin >> a[i];
    const long long int MOD = 998244353;
    vector<vector<long long int>> dp(n, vector<long long int>(10, 0));
    dp[0][a[0]] = 1;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < 10; j++) {
            if (dp[i][j] != 0) {
                dp[i + 1][(j + a[i + 1]) % 10] += dp[i][j];
                dp[i + 1][(j + a[i + 1]) % 10] %= MOD;
                dp[i + 1][(j * a[i + 1]) % 10] += dp[i][j];
                dp[i + 1][(j * a[i + 1]) % 10] %= MOD;
            }
        }
    }
    for (int i = 0; i < 10; i++) cout << dp[n - 1][i] << endl;
}
