//
// Created by Tatsuhiro Hashimoto on 2020/04/26.
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

int N = 0, M = 0, old = 1;

void solve() {
    if (M % 2 == 0) old = 0;

    for (int i = N; i >= 0; --i) {
        for (int j = old; j <= N - i; j += 2) {
            int k = N - i - j;
            if (2 * k + 3 * j + 4 * i == M) {
                cout << k << " " << j << " " << i << endl;
                return ;
            }
        }
    }
    cout << -1 << " " << -1 << " " << -1 << endl;
}

signed main() {
    prepare
    cin >> N >> M;
    solve();
}