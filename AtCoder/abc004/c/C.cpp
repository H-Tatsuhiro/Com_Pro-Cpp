//
// Created by Tatsuhiro Hashimoto on 2020/04/25.
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

void solve(int x) {
    vector<int> y(6, 0);
    for (int i = 0; i < 6; ++i) {
        y[i] = i + 1;
    }
    int imod1 = 0;
    int imod2 = 0;
    int tmp = 0;
    for (int i = 0; i < x; ++i) {
        imod1 = (i % 5);
        imod2 = (i % 5) + 1;
        tmp = y[imod1];
        y[imod1] = y[imod2];
        y[imod2] = tmp;
    }
    for (int i = 0; i < 6; ++i) {
        cout << y[i];
    }
    cout << endl;
}

signed main() {
    prepare
    int N;
    cin >> N;
    int M = N % 30;
    solve(M);
}