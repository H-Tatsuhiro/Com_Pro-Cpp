#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

// 入力
int n, A;
int a[110], b[110];

// DPテーブル
bool dp[110][10010];

int main() {
    cin >> n >> A;
    for (int i = 0; i < n; ++i) cin >> a[i] >> b[i];

    memset(dp, 0, sizeof(dp));   // 一旦すべて false に
    dp[0][0] = true;             // dp[0][0] だけ true に

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j <= A; ++j) {
            if (j >= b[i]) dp[i+1][j] |= dp[i][j-b[i]];
            if (j >= a[i]) dp[i+1][j] |= dp[i][j-a[i]];
        }
    }

    if (dp[n][A]) cout << "Yes" << endl;
    else cout << "No" << endl;
}
