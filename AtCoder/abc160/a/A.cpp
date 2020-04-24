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
#define ALL(v) (v).begin(), (v).end();
#define SORT(v) sort(ALL(v));
#define REV(v) reverse(ALL(v));
static inline ll gcd(ll a, ll b) { return a % b == 0 ? b : gcd(b, a % b);}
static inline ll lcm(ll a, ll b) { return a / gcd(a, b) * b; }
#define prepare cin.tie(0); cout.tie(0); ios::sync_with_stdio(false);

void solve() {
    string S;
    cin >> S;
    bool answer = false;
    if (S[2] == S[3] && S[4] == S[5]) {
        answer = true;
    }
    if (answer == true) cout << "Yes" << endl;
    else cout << "No" << endl;
}

signed main() {
    prepare
    solve();
}
