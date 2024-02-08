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

signed main() {
    prepare
    int Case;
    cin >> Case;
    for (int k = 0; k < Case; ++k) {
        int N = 0;
        cin >> N;
        int count = 0;
        int H[N];
        for (int i = 0; i < N; ++i) {
            cin >> H[i];
        }
        for (int j = 1; j < N - 1; ++j) {
            if(H[j] > H[j - 1] && H[j] > H[j + 1]) {
                count++;
            }
        }
        cout << "Case #" << k + 1 << ": " << count<< endl;
    }
}