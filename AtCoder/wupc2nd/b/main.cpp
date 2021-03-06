#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
template<class T> inline void chmin(T& a, T b) {if (a > b) a = b;}
int main() {
    int n; string s; cin >> n >> s;
    vector<int> dp(n, 10e6);
    dp[0] = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 1; j <= 3; j++) {
            if (i + j < n) {
                if (s[i + j] == 'X') chmin(dp[i + j], dp[i] + 1);
                else chmin(dp[i + j], dp[i]);
            }
        }
    }
    cout << dp[n - 1] << endl;
}
