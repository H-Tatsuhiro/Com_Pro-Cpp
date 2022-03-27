#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n, k; cin >> n >> k;
    vector a(n, 0), b(n, 0);
    vector dp(n, array<bool, 2>{false, false});
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];
    dp[0][0] = true, dp[0][1] = true;
    for (int i = 0; i < n - 1; i++) for (int j = 0; j < 2; j++) for (int l = 0; l < 2; l++) if (abs((j == 0 ? a[i] : b[i]) - (l == 0 ? a[i + 1] : b[i + 1])) <= k) dp[i + 1][l] |= dp[i][j];
    cout << ((dp[n - 1][0] || dp[n - 1][1]) ? "Yes" : "No") << endl;
}
