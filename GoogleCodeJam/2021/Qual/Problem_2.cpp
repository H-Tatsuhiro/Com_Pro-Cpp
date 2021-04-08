//
// Created by Tatsuhiro Hashimoto on 2021/03/26.
//
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define FSP(n) cout << fixed << setprecision(n);
typedef long long ll;
typedef long double ld;
typedef unsigned long long ull;
#define ilMAX 2147483647;
#define llMAX 9223372036854775807;
#define ullMAX 18446744073709551615;
#define SORT(v) sort((v).begin(), (v).end());
#define REV(v) reverse((v).begin(), (v).end());
template<class T> static inline T gcd(T a, T b) { return a % b == 0 ? b : gcd(b, a % b);}
template<class T> static inline T lcm(T a, T b) { return a / gcd(a, b) * b; }
template<class T> inline void chmin(T& a, T b) {if (a > b) a = b;}
#define prepare cin.tie(0); cout.tie(0); ios::sync_with_stdio(false);
signed main() {
    prepare
    int Cases;
    cin >> Cases;
    for (int Case = 0; Case < Cases; ++Case) {
        ll x, y, ans = 0; string s; cin >> x >> y >> s;
        int n = s.length();
        char c = s[0];
        for (int i = 1; i < n; i++) {
            if (s[i] == 'C') {
                if (c == 'C' || c == '?') c = s[i];
                else ans += y, c = s[i];
            }
            else if (s[i] == 'J') {
                if (c == 'J' || c == '?') c = s[i];
                else ans += x, c = s[i];
            }
        }
        cout << "Case #" << Case + 1 << ": " << ans << endl;
    }
}
// Passed test 1 & 2