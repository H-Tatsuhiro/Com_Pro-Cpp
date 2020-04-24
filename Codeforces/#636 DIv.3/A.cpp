/*
 *
 *
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

void solve(int n) {
    int tmp = 0;
    for (double k = 2.0; k <= n; ++k) {
        int pw = pow(2, k) - 1;
        if (n % pw == 0) {
            if (tmp == 0) {
                tmp = n / pw;
                break;
            }
        }
    }
    cout << tmp << endl;
}

signed main() {
    prepare
    int t;
    cin >> t;
    for (int i = 0; i < t; ++i) {
        int n_in;
        cin >> n_in;
        solve(n_in);
    }
}