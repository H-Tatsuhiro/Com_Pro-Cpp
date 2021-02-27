#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;
template<class T> static inline T gcd(T a, T b) { return a % b == 0 ? b : gcd(b, a % b);}
template<class T> static inline T lcm(T a, T b) { return a / gcd(a, b) * b; }
int main() {
    int n; cin >> n;
    long long int ans = 1;
    for (int i = 0; i < n; i++) {
        long long int t; cin >> t;
        ans = lcm(ans, t);
    }
    cout << ans << endl;
}