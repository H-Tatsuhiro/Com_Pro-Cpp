#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    long long int n, mod = 998244353, inv = 499122177; cin >> n;
    long long int ans = 0, p = 10;
    function<long long int(long long int)> calc = [&](long long int x) -> long long int {
        x %= mod;
        long long int ret = x;
        ret *= (x + 1), ret %= mod, ret *= inv, ret %= mod;
        return ret;
    };
    for (int i = 0; i < 18; i++) {
        long long int l = p / 10, r = min(n, p - 1);
        if (l <= r) ans += calc(r - l + 1), ans %= mod;
        p *= 10;
    }
    cout << ans << endl;
}
