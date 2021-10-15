#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    string s, t = "chokudai"; cin >> s;
    const int MOD = 1000000007;
    int n = s.length();
    vector<vector<long long int>> dp(n + 1, vector<long long int>(9, 0));
    for (int i = 0; i <= n; i++) dp[i][0] = 1;
    for (int i = 0; i < s.length(); i++) {
        for (int j = 0; j < t.length(); j++) {
            if (s[i] == t[j]) dp[i + 1][j + 1] = (dp[i][j + 1] + dp[i][j]) % MOD;
            else dp[i + 1][j + 1] = dp[i][j + 1];
        }
    }
    cout << dp[n][8] << endl;
}
