#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
template<class T> inline void chmax(T& a, T b) { if (a < b) { a = b; } }
int main() {
    long long int n; cin >> n;
    vector<vector<vector<long long int>>> dp(n + 1, vector<vector<long long int>>(2, vector<long long int>(2, 0)));
    dp[0][0][0] = 1;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 2; j++) {
            for (int k = 0; k < 2; k++) {
                for (int l = 0; l < 10; l++) {
                    int x = j | (l == 0), y = k | (l == 9);
                    dp[i + 1][x][y] += dp[i][j][k], dp[i + 1][x][y] %= 1000000007;
                }
            }
        }
    }
    cout << dp[n][1][1] << endl;
}
