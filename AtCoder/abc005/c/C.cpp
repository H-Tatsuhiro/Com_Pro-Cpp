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

int T = 0, N = 0, M = 0;
bool ans = true;

void solve(vector<int>& x, vector<int>& y, vector<bool>& z_1, vector<bool>& z_2) {
    if (N >= M) {
        for (int i = 0; i < N; ++i) {
            for (int j = 0; j < M; ++j) {
                if (x[i] <= y[j] && y[j] <= x[i] + T && z_2[j] == false && z_1[i] == false) {
                    z_1[i] = true;
                    z_2[j] = true;
                }
            }
        }

        for (int f = 0; f < M; ++f) {
            if (z_2[f] == false) {
                ans = false;
                break;
            }
        }
    }
    else ans = false;

    if (ans) cout << "yes" << endl;
    else cout << "no" << endl;
}

signed main() {
    prepare
    cin >> T >> N;
    vector<int> A(N, 0);
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }
    cin >> M;
    vector<int> B(M, 0);
    for (int j = 0; j < M; ++j) {
        cin >> B[j];
    }
    vector<bool> flag1(N, false);
    vector<bool> flag2(M, false);

    solve(A, B, flag1, flag2);
}
