#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
template<class T> inline void chmax(T& a, T b) {if (a < b) a = b;}
int main() {
    int n, w; cin >> n >> w;
    vector<int> x(n, 0), v(n, 0);
    for (int i = 0; i < n; i++) cin >> x[i] >> v[i];
    vector<vector<long long int>> dp(n + 1, vector<long long int>(w + 1, 0));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= w; j++) {
            if (j - x[i] >= 0) chmax(dp[i + 1][j], dp[i][j - x[i]] + v[i]);
            chmax(dp[i + 1][j], dp[i][j]);
        }
    }
    cout << dp[n][w] << endl;
}
