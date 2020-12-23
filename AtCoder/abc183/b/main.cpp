#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <iomanip>
using namespace std;
int main() {
    long double sx, sy, gx, gy; cin >> sx >> sy >> gx >> gy;
    long double ans = ((sx * gy) + (gx * sy)) / (sy + gy);
    cout << setprecision(15) << ans << endl;
}
