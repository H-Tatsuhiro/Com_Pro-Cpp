#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int x, y, z; cin >> x >> y >> z;
    if (y < 0) x *= -1, y *= -1, z *= -1;
    if (y > x) cout << abs(x) << endl;
    else {
        if (z < y) cout << abs(z) + abs(x - z) << endl;
        else cout << -1 << endl;
    }
}
