#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n, s; cin >> n >> s;
    vector<int> a(n, 0);
    for (int i = 0; i < n; i++) cin >> a[i];
    vector<vector<bool>> dp(n + 1, vector<bool>(s + 1, false));
    dp[0][0] = true;
    for (int i = 0; i < n; i++) {
        for (int S = 0; S <= s; S++) {
            if (dp[i][S]) {
                dp[i + 1][S] = true;
                if (S + a[i] <= s) dp[i + 1][S + a[i]] = true;
            }
        }
    }
    cout << (dp[n][s] ? "Yes" : "No") << endl;
}
