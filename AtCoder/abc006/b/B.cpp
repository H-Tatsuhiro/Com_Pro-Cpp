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

int N = 0;

void solve(vector<long long>& x) {
    x[2] = 1;
    for (int i = 3; i < N; ++i) {
        x[i] = (x[i - 1] + x[i - 2] + x[i - 3]) % 10007;
    }
    int ans = x[N - 1];
    cout << ans << endl;
}

signed main() {
    prepare
    cin >> N;
    vector<long long> trib(N, 0);
    solve(trib);
}
