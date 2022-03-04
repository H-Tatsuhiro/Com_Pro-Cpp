#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <iomanip>
using namespace std;
int main() {
    long double t, l, x, y, q; cin >> t >> l >> x >> y >> q;
    long double PI = 3.14159265358979;
    function<long double(long double)> calc = [&](long double f) -> long double {
        long double a = -(l / 2.0) * sin(f / t * 2.0 * PI);
        long double b = (l / 2.0) - (l / 2.0) * cos(f / t * 2.0 * PI);
        long double c = sqrt((0.0 - x) * (0.0 - x) + (a - y) * (a - y));
        long double degree = atan2(b, c);
        return degree * 180.0 / PI;
    };
    for (int i = 0; i < q; i++) {
        long double e; cin >> e;
        cout << fixed << setprecision(15) << calc(e) << endl;
    }
}
