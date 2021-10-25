#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <iomanip>
using namespace std;
int main() {
    int n; cin >> n;
    vector<int> a(n, 0);
    for (int i = 0; i < n; i++) cin >> a[i];
    function<long double(long double, long double)> ldmin = [](long double x, long double y) {
        if (x <= y) return x;
        else return y;
    };
    function<long double(long double)> calc = [&](long double x) {
        long double res = 0.0;
        for (int i = 0; i < n; i++) {
            res += x + a[i];
            res -= ldmin(2 * x, a[i]);
        }
        res /= (long double)n;
        return res;
    };
    long double l = 0.0, r = 1000000000.0;
    int cnt = 500;
    while(cnt--) {
        long double j = (l * 2 + r) / 3, k = (l + r * 2) / 3;
        if (calc(j) > calc(k)) l = j;
        else r = k;
    }
    cout << fixed << setprecision(100) << calc(l) << endl;
}
