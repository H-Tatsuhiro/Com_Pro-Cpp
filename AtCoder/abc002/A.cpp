//
// Created by Tatsuhiro Hashimoto on Tue Dec 17 15:22:53 JST 2019.
//
//
#include <bits/stdc++.h>
using namespace std;
using D1VEC = vector<int>;
using D2VEC = vector<D1VEC>;
using TIII = tuple<int, int, int>;
using PII = pair<int, int>;
typedef long long ll;
typedef long double ld;
typedef unsigned long long ull;
//struct @PREFIX@ {
//  Insert here...
//};
#define endl "\n"
#define INF 1000000000
#define INF_L 1000000000000000000
#define MOD 1000000007
#define REP(i, n)  for(int i = 0; i < n; i++)
#define FREP(i, a, n)  for(int i = a; i < n; i++)
#define SREP(i, a, n)  for(int i = a; i <= n; i++)
#define ALL(v) (v).begin(), (v).end();
#define SORT(v) sort((v).begin(), (v).end());
#define REV(v) reverse((v).begin(), (v).end());
#define RS(v) sort((v).begin(), (v).end(), greater<int>());
#define FSP(n) cout << fixed << setprecision(n);
static inline ll gcd(ll a, ll b) { return a % b == 0 ? b : gcd(b, a % b);}
static inline ll lcm(ll a, ll b) { return a / gcd(a, b) * b; }
signed main(void) {
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(false);
    ull A, B;
    cin >> A >> B;
    cout << max(A, B) << endl;
    return 0;
}
