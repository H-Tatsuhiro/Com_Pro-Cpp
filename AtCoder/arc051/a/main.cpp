#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int x, y, r, a, b, c, d; cin >> x >> y >> r >> a >> b >> c >> d;
    if (x + r > c || x - r < a || y + r > d || y - r < b) cout << "YES" << endl;
    else cout << "NO" << endl;
    if (max((a - x) * (a - x), (c - x) * (c - x)) + max((b - y) * (b - y), (d - y) * (d - y)) > r * r) cout << "YES" << endl;
    else cout << "NO" << endl;
}
