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
#define prepare cin.tie(0); cout.tie(0); ios::sync_with_stdio(false);
signed main() {
    prepare
    int Cases;
    cin >> Cases;
    for (int Case = 0; Case < Cases; ++Case) {
        int n; cin >> n;
        vector<int> v(n, 0);
        for (int i = 0; i < n; i++) cin >> v[i];
        ll ans = 0;
        for (int i = 0; i < n - 1; i++) {
            int k = i, tmp = v[i];
            for (int j = i; j < n; j++) if (tmp > v[j]) k = j, tmp = v[j];
            reverse(v.begin() + i, v.begin() + k + 1);
            ans += k - i + 1;
        }
        cout << "Case #" << Case + 1 << ": " << ans << endl;
    }
}
// Passed all test
