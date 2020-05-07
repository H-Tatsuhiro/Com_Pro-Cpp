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
    int N, M;
    cin >> N >> M;
    vector<int> H(N, 0);
    for (int i = 0; i < N; ++i) {
        cin >> H[i];
    }
    vector<int> A(M, 0);
    vector<int> B(M, 0);
    for (int j = 0; j < M; ++j) {
        cin >> A[j] >> B[j];
    }
    vector<bool> T(N, true);
    vector<int> cnt(N, 1);
    for (int k = 0; k < M; ++k) {
        int X = A[k] - 1;
        int Y = B[k] - 1;

        if (H[X] < H[Y]) {
            T[X] = false;
        }
        else if (H[Y] < H[X]) {
            T[Y] = false;
        }
        else if (H[X] == H[Y]) {
            T[X] = false;
            T[Y] = false;
        }

    }
    int ans = 0;
    for (int l = 0; l < N; ++l) {
        if (T[l] == true) ans++;
    }
    cout << ans << endl;
}

