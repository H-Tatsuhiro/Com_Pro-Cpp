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

void solve(vector<int>& vec) {
    sort(vec.begin(), vec.end());
    cout << vec[0] << endl;
}

signed main() {
    prepare
    int N;
    cin >> N;
    vector<int> T(N, 0);
    for (int i = 0; i < N; ++i) {
        cin >> T[i];
    }
    solve(T);
}