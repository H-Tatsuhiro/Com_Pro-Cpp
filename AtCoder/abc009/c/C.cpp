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

int N = 0, K = 0;
string S = "", tmp_1 = "", tmp_2 = "";

void solve() {
    for (int i = 0; i < N; i++) {
        int X = i;
        for (int j = i + 1; j < N; j++) {
            if (tmp_1[X] > tmp_1[j]) {
                tmp_2 = tmp_1;
                swap(tmp_2[i], tmp_2[j]);
                int cnt = 0;
                for (int k = 0; k < N; k++) if (S[k] != tmp_2[k]) cnt++;
                if (cnt <= K) X = j;
            }
        }
        swap(tmp_1[i], tmp_1[X]);
    }
    cout << tmp_1 << endl;
}

signed main() {
    prepare
    cin >> N >> K >> S;
    tmp_1 = S;
    solve();
}
