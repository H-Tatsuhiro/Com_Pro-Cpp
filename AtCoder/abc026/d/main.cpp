#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <iomanip>
using namespace std;
int main() {
    long double a, b, c; cin >> a >> b >> c;
    const long double PI = acos(-1.0);
    auto calc = [&](long double t) -> long double {
        return a * t + b * sinl(c * t * PI);
    };
    long double l = 0, r = 200;
    for (int i = 0; i < 100; i++) {
        long double mid = (l + r) / 2;
        if (calc(mid) <= 100) l = mid;
        else r = mid;
    }
    cout << fixed << setprecision(100) << l << endl;
}
