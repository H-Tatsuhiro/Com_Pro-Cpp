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

signed main() {
    prepare
    int t;
    cin >> t;
    for (int i = 0; i < t; ++i) {
        long long n; cin >> n;
        for (int j = 2; j < 50; j++) {
            long long int x = pow(2, j) - 1;
            if (n % x == 0) {
                cout << n / x << endl;
                break;
            }
        }
    }
}