#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    long long int n, l; cin >> n >> l;
    vector<long long int> dp(n + 1, 0);
    dp[0] = 1;
    for (int i = 0; i < n; i++) {
        dp[i + 1] += dp[i], dp[i + 1] %= 1000000007;
        if (i + l <= n) dp[i + l] += dp[i], dp[i + l] %= 1000000007;
    }
    cout << dp[n] << endl;
}
