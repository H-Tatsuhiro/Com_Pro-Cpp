#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
template<class T> inline void chmax(T& a, T b) { if (a < b) { a = b; } }
int main() {
    int n, m; cin >> n >> m;
    vector<bool> a(n + 1, false);
    vector<long long int> dp(n + 1, 0);
    for (int i = 0; i < m; i++) {
        int c; cin >> c; a[c] = true;
    }
    dp[0] = 1;
    for (int i = 0; i < n; i++) {
        if (!a[i + 1]) dp[i + 1] += dp[i], dp[i + 1] %= 1000000007;
        if (!a[i + 2] && i + 2 <= n) dp[i + 2] += dp[i], dp[i + 2] %= 1000000007;
    }
    cout << dp[n] << endl;
}
