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

void solve(vector<int>& vec) {
    sort(vec.begin(), vec.end(), greater<int>());
    for (int i = 1; i < N; ++i) {
        if (vec[0] != vec[i]) {
            cout << vec[i] << endl;
            break;
        }
    }
}

signed main() {
    prepare
    cin >> N;
    vector<int> A(N, 0);
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }
    solve(A);
}
