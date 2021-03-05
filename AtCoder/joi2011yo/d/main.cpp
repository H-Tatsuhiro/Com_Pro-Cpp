#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n; cin >> n;
    vector<int> a(n, 0);
    for (int i = 0; i < n; i++) cin >> a[i];
    vector<vector<long long int>> dp(n, vector<long long int>(21, 0));
    dp[0][a[0]] = 1;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j <= 20; j++) {
            if (j + a[i + 1] <= 20) dp[i + 1][j + a[i + 1]] += dp[i][j];
            if (j - a[i + 1] >= 0) dp[i + 1][j - a[i + 1]] += dp[i][j];
        }
    }
    cout << dp[n - 2][a[n - 1]] << endl;
}
