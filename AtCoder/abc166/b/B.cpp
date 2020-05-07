//
// Created by Tatsuhiro Hashimoto on 2020/05/04.
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

signed main() {
    prepare
    int N, K;
    cin >> N >> K;
    vector<bool> T(N, false);

    for (int j = 0; j < K; ++j) {
        int D = 0;
        cin >> D;
        vector<int> A(D, 0);
        for (int i = 0; i < D; ++i) {
            cin >> A[i];
            if (T[A[i] - 1] == false) {
                T[A[i] - 1] = true;
            }
        }
    }

    int ans = 0;
    for (int k = 0; k < N; ++k) {
        if (T[k] == false) {
            ans++;
        }
    }
    cout << ans << endl;
}

