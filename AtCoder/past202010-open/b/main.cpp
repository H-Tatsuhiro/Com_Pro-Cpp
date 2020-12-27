#include <iostream>
#include <cmath>
#include <algorithm>
#include <iomanip>
#include <vector>
using namespace std;
int main() {
    long double x, y; cin >> x >> y;
    if (y == 0.0) cout << "ERROR" << endl;
    else {
        long double ans = floor(1.0 * 100 * x / y) / 100;
        cout << fixed << setprecision(2) << ans << endl;
    }
}
