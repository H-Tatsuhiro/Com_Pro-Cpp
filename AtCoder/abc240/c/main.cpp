#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
bool dp[110][10010];
int main() {
    int n, x;
    cin >> n >> x;
    vector<int> a(n, 0), b(n, 0);
    for (int i = 0; i < n; ++i) cin >> a[i] >> b[i];
    memset(dp, 0, sizeof(dp));
    dp[0][0] = true;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j <= x; ++j) {
            if (j >= b[i]) dp[i + 1][j] |= dp[i][j - b[i]];
            if (j >= a[i]) dp[i + 1][j] |= dp[i][j - a[i]];
        }
    }
    cout << (dp[n][x] ? "Yes" : "No") << endl;
}
