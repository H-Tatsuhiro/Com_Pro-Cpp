#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
template<class T> inline void chmin(T& a, T b) { if (a > b) { a = b; } }
const long long inf = 1LL << 60;
int main() {
    long long N, K; cin >> N >> K;
    vector<long long> h(N, 0), dp(N, inf);
    for (int i = 0; i < N; i++) cin >> h[i];
    dp[0] = 0;
    for (int i = 0; i < N; i++) {
        for (int j = 1; j <= K; j++) {
            if (i + j == N) break;
            chmin(dp[i + j], dp[i] + abs(h[i] - h[i + j]));
        }
    }
    cout << dp[N - 1] << endl;
}
