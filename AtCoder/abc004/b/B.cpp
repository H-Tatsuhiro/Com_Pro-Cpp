//
// Created by Tatsuhiro Hashimoto on 2020/04/25.
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

vector<vector <char>> ans(4, vector<char>(4, '.'));

void solve(vector<vector <char>>& C) {
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
            ans[3 - i][3 - j] = C[i][j];
        }
    }
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
            if (j < 3) cout << ans[i][j] << " ";
            else cout << ans[i][j] << endl;
        }
    }
}

signed main() {
    prepare
    vector<vector <char>> C(4, vector<char>(4, '.'));
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
            cin >> C[i][j];
        }
    }
    solve(C);
}
