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

int N, M, Q;
vector<int> a, b, c, d;
int ans = 0;

void dfs(vector<int> A) {
    if (A.size() == N + 1) {
        int now = 0;
        for (int i = 0; i < Q; ++i) {
            if (A[b[i]] - A[a[i]] == c[i]) now += d[i];
        }
        ans = max(now, ans);
        return;
    }
    A.push_back(A.back());
    while (A.back() <= M) {
        dfs(A);
        A.back()++;
    }
}

signed main() {
    prepare
    cin >> N >> M >> Q;
    a = b = c = d = vector<int>(Q, 0);
    for (int i = 0; i < Q; ++i) {
        cin >> a[i] >> b[i] >> c[i] >> d[i];
    }
    dfs(vector<int>(1, 1));
    cout << ans << endl;
}