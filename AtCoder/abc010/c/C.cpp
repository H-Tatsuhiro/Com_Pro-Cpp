//
// Created by Tatsuhiro Hashimoto on 2020/05/01.
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

int a = 0, b = 0, c = 0, d = 0;
int T = 0, V = 0, N = 0;
bool ans = false;

double calc(int w, int x, int y, int z) {
    return sqrt(pow(y - w, 2) + pow(z - x, 2));
}

void solve(vector<int>& v1, vector<int>& v2) {
    int pos = T * V;
    for (int i = 0; i < N; ++i) {
        double calc1 = calc(a, b, v1[i], v2[i]);
        double calc2 = calc(v1[i], v2[i], c, d);
        if (calc1 + calc2 <= pos) {
            ans = true;
            break;
        }
    }
    if (ans) cout << "YES" << endl;
    else cout << "NO" << endl;
}

signed main() {
    prepare
    cin >> a >> b >> c >> d >> T >> V >> N;
    vector<int> X(N, 0);
    vector<int> Y(N, 0);
    for (int i = 0; i < N; ++i) {
        cin >> X[i] >> Y[i];
    }
    solve(X, Y);
}