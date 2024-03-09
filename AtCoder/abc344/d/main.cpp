#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    string t; cin >> t;
    int n; cin >> n;
    vector<int> a(n, 0);
    vector<vector<string>> v(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        v[i].resize(a[i]);
        for (int j = 0; j < a[i]; j++) cin >> v[i][j];
    }
    vector<vector<int>> dp(n + 1, vector<int>(101, 101));
    dp[0][0] = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 101; j++) dp[i + 1][j] = dp[i][j];
        for (int j = 0; j < a[i]; j++) {
            for (int k = 0; k + v[i][j].length() <= t.length(); k++) {
                bool f = true;
                for (int l = 0; l < v[i][j].length(); l++) if (t[k + l] != v[i][j][l]) f = false;
                if (f) dp[i + 1][k + v[i][j].length()] = min(dp[i + 1][k + v[i][j].length()], dp[i][k] + 1);
            }
        }
    }
    cout << (dp[n][t.length()] < 101 ? dp[n][t.length()] : -1) << endl;
}