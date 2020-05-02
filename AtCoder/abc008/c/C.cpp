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

void solve(vector<int>& vec) {
    double ans = 0;
    for (int i = 0; i < N; ++i) {
        int S = 0;
        for (int j = 0; j < N; ++j) {
            if (i != j && vec[i] % vec[j] == 0) {
                S++;
            }
        }
        if (S % 2) ans += 0.5;
        else ans += 1.0 * (S + 2) / (2 * S + 2);
    }
    FSP(20);
    cout << ans << endl;
}

signed main() {
    prepare
    cin >> N;
    vector<int> C(N, 0);
    for (int i = 0; i < N; ++i) {
        cin >> C[i];
    }
    solve(C);
}