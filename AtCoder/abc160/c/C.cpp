/*
 * Owner   : Tatsuhiro Hashimoto
 * Created : 2020-04-22 (Wed)
 */

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
    int K = 0, N = 0;
    cin >> K >> N;
    vector<int> A(N, 0);
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }
    A.push_back(A[0] + K);
    int tmp = 0;
    for (int i = 0; i < N; ++i) {
        tmp = max(tmp, A[i + 1] - A[i]);
    }
    cout << K - tmp << endl;
}