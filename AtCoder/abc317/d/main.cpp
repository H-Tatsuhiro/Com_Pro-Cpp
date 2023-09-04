#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <numeric>
using namespace std;
int main() {
    int n; cin >> n;
    vector<int> x(n, 0), y(n, 0), z(n, 0);
    for (int i = 0; i < n; i++) cin >> x[i] >> y[i] >> z[i];
    int s = accumulate(z.begin(), z.end(), 0);
    long long int INF = 1e18;
    vector<long long int> dp(s + 1, INF);
    dp[0] = 0;
    for (int i = 0; i < n; i++) {
        int w = max(0, (x[i] + y[i]) / 2 + 1 - x[i]);
        for (int j = s; j >= z[i]; j--) dp[j] = min(dp[j], dp[j - z[i]] + w);
    }
    long long int ans = INF;
    for (int i = s / 2 + 1; i <= s; i++) ans = min(ans, dp[i]);
    cout << ans << endl;
}


