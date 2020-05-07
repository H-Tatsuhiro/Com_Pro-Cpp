/*
 * Owner   : Tatsuhiro Hashimoto
 * Created : 2020-05-02 (Sat)
 */

#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define FSP(n) cout << fixed << setprecision(n);
typedef long long ll;
typedef long double ld;
typedef unsigned long long ull;
static inline ll gcd(ll a, ll b) { return a % b == 0 ? b : gcd(b, a % b);}
static inline ll lcm(ll a, ll b) { return a / gcd(a, b) * b; }
#define prepare cin.tie(0); cout.tie(0); ios::sync_with_stdio(false);

ull X;

void solve() {
    int cnt = 0;
    ull ans = 100;
    while(true) {
        ans += ans * 0.01;
        cnt++;
        if (ans >= X) break;
    }
    cout << cnt << endl;
}

signed main() {
    prepare
    cin >> X;
    solve();
}
