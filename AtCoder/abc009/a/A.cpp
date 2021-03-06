//
// Created by Tatsuhiro Hashimoto on 2020/04/29.
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

int N = 0;

void solve() {
    if(N % 2 != 0) cout << N / 2 + 1 << endl;
    else cout << N / 2 << endl;
}

signed main() {
    prepare
    cin >> N;
    solve();
}
