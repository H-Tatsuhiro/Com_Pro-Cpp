#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <iomanip>
using namespace std;
int main() {
    long double a, b, x; cin >> a >> b >> x;
    long double l = a * a * b / 2, ans = 0.0;
    const long double pi = 3.14159265358979;
    if (x < l) ans = atan(a * b * b / (2.0 * x));
    else ans = atan((2.0 * b - 2.0 * x / (a * a)) / a);
    ans = ans / pi * 180;
    cout << fixed << setprecision(10) << ans << endl;

}
