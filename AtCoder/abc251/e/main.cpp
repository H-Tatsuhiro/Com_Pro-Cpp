#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n; cin >> n;
    vector<int> a(n, 0);
    for (int i = 0; i < n; i++) cin >> a[i];
    long long int inf = 1000000000000000000, ans = inf;
    vector<vector<long long int>> dp(n, vector<long long int>(2, inf));
    for (int t = 0; t < 2; t++) {
        dp[0][t] = a[0] * t, dp[0][1 - t] = inf;
        for(int i = 1; i < n; i++) {
            dp[i][0] = dp[i - 1][1];
            dp[i][1] = min(dp[i - 1][0], dp[i - 1][1]) + a[i];
        }
        if (t == 0) ans = min(ans, dp[n - 1][1]);
        else ans = min(ans, min(dp[n - 1][0], dp[n - 1][1]));
    }
    cout << ans << endl;
}
