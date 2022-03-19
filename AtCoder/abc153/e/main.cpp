#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
template<class T> void chmin(T& a, T b) { if (a > b) { a = b; }}
int main() {
    int h, n; cin >> h >> n;
    vector<vector<int>> dp(n + 1, vector<int>(h + 1, 10e8));
    vector<int> a(n, 0), b(n, 0);
    for (int i = 0; i < n; i++) cin >> a[i] >> b[i];
    dp[0][0] = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= h; j++) {
            chmin(dp[i + 1][j], dp[i][j]);
            chmin(dp[i + 1][min(h, j + a[i])], dp[i + 1][j] + b[i]);
        }
    }
    cout << dp[n][h] << endl;
}
