#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
long long int fn(long long int n) {
    long long int ret = 1;
    while(n) {
        n /= 10;
        ret *= 10;
    }
    return ret;
}
int main() {
    int n; cin >> n;
    vector<long long int> a(n, 0);
    long long int ans = 0, mod = 1e9 + 7;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        ans = fn(a[i]) * ans + a[i];
        ans %= mod;
    }
    cout << ans << endl;
}
