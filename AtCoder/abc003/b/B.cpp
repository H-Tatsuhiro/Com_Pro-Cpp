//
// Created by Tatsuhiro Hashimoto on 2020/04/23.
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

string S, T;
int N = 0;
bool B = true;

void solve() {
    if (S != T) {
        B = false;
        for (int i = 0; i < N; ++i) {
            if (S[i] == T[i]) {
                B = true;
                continue;
            }
            else if (S[i] == '@' && (T[i] == 'a' || T[i] == 't' || T[i] == 'c' || T[i] == 'o' || T[i] == 'd' || T[i] == 'e' || T[i] == 'r')) {
                B = true;
                continue;
            }
            else if ((S[i] == 'a' || S[i] == 't' || S[i] == 'c' || S[i] == 'o' || S[i] == 'd' || S[i] == 'e' ||
                      S[i] == 'r') && T[i] == '@') {
                B = true;
                continue;
            }
            else {
                B = false;
                break;
            }
        }
    }
}

signed main() {
    prepare;
    cin >> S >> T;
    N = S.length();
    solve();
    if (B == false) cout << "You will lose" << endl;
    else cout << "You can win" << endl;
}