//
// Created by Tatsuhiro Hashimoto on 2020/04/24.
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

double  Deg = 0, Dis = 0;

void solve() {
    int W = 0;
    double cnt = 11.25;
    string Dir = "";
    vector<string> S = {"N", "NNE", "NE", "ENE", "E", "ESE", "SE", "SSE", "S", "SSW", "SW", "WSW", "W", "WNW", "NW", "NNW"};
    for (int i = 1; i < S.size(); i++) {
        if (cnt <= Deg && Deg < cnt + 22.50) {
            Dir = S[i];
            break;
        }
        cnt += 22.50;
    }
    if (Dir == "") {
        Dir = S[0];
    }

    double tmp_0 = Dis / 60.0;

    vector<double> df2 = {0.0, 0.25, 1.55, 3.35, 5.45, 7.95, 10.75, 13.85, 17.15, 20.75, 24.45, 28.45, 32.65};
    for (int j = 0; j < df2.size(); ++j) {
        if (tmp_0 >= df2[j] && tmp_0 < df2[j + 1]) {
            W = j;
        }
        else if(tmp_0 >= 32.65) {
            W = 12;
            break;
        }
    }

    if (W == 0) {
        Dir = "C";
    }
    cout << Dir << " " << W << endl;
}

signed main() {
    prepare
    cin >> Deg >> Dis;
    Deg *= 0.1;
    solve();
}