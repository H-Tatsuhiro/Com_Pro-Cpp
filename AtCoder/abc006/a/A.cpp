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

string S;
int N = 0;
bool ans = false;

void solve() {
    if (S[0] == '3') ans = true;
    istringstream iss;
    iss = istringstream(S);
    N = atoi(S.c_str());
    if (ans == false && N % 3 == 0) ans = true;
    if (ans) cout << "YES" << endl;
    else cout << "NO" << endl;
}

signed main() {
    prepare
    cin >> S;
    solve();
}