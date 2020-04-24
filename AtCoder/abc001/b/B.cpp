/*
 *
 *
 */

#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define FSP(n) cout << fixed << setprecision(n);
typedef long long ll;
typedef long double ld;
typedef unsigned long long ull;
#define ALL(v) (v).begin(), (v).end();
#define SORT(v) sort(ALL(v));
#define REV(v) reverse(ALL(v));
static inline ll gcd(ll a, ll b) { return a % b == 0 ? b : gcd(b, a % b);}
static inline ll lcm(ll a, ll b) { return a / gcd(a, b) * b; }
#define prepare cin.tie(0); cout.tie(0); ios::sync_with_stdio(false);

void solve() {
    double M;
    cin >> M;
    double N = M / 1000;
    int VV = 0;
    if (N < 0.1) {
        VV = 0;
    }
    else if (0.1 <= N && 5.0 >= N) {
        VV = N * 10;
    }
    else if (6.0 <= N && 30.0 >= N) {
        VV = N + 50;
    }
    else if (35.0 <= N && 70.0 >= N) {
        VV = (N - 30) / 5 + 80;
    }
    else {
        VV = 89;
    }
    if (0 <= VV && 9 >= VV) {
        cout << 0 << VV << endl;
    }
    else {
        cout << VV << endl;
    }
}

signed main() {
    prepare
    solve();
}
