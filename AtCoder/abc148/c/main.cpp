#include <iostream>
#include <cmath>
#include <numeric>
#include <algorithm>
#include <vector>
using namespace std;
typedef unsigned long long ll;
static inline ll gcd(ll a, ll b) { return a % b == 0 ? b : gcd(b, a % b);}
static inline ll lcm(ll a, ll b) { return a / gcd(a, b) * b; }
int main() {
    int A, B; cin >> A >> B;
    unsigned long long int ans = lcm(A, B);
    cout << ans << endl;
}
