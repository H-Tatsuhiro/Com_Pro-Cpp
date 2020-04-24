//
// Created by Tatsuhiro Hashimoto on 2020/04/24.
//
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

int x_0, y_0, x_1, y_1, x_2, y_2;
double ans = 0;

void solve() {
    x_1 -= x_0;
    x_2 -= x_0;
    y_1 -= y_0;
    y_2 -= y_0;
    x_0 = 0;
    y_0 = 0;
    double tmp = 0;
    tmp = (x_1 * y_2) - (x_2 * y_1);
    if (tmp < 0) tmp = 0 - tmp;
    ans = tmp / 2.0;
    FSP(1);
    cout << ans << endl;
}

signed main() {
    prepare
    cin >> x_0 >> y_0 >> x_1 >> y_1 >> x_2 >> y_2;
    solve();
}