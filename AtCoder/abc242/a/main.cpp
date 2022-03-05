#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <iomanip>
using namespace std;
int main() {
    long double a, b, c, x; cin >> a >> b >> c >> x;
    if (x <= a) cout << 1.0000000 << endl;
    else if (b < x) cout << 0.000000000 << endl;
    else {
        long double ans = c / (b - a);
        cout << fixed << setprecision(100) << ans << endl;
    }
}
