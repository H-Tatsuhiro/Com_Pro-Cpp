#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <iomanip>
using namespace std;
int main() {
    int w, h, x, y; cin >> w >> h >> x >> y;
    int ans = 0;
    if (2 * x == w && 2 * y == h) ans = 1;
    cout << fixed << setprecision(100) << double(w) * double(h) / 2 << " " << ans << endl;
}
