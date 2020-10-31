#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int x, l, r; cin >> x >> l >> r;
    if (l <= x && x <= r) cout << x << endl;
    else if (x < l && x < r) cout << l << endl;
    else cout << r << endl;
}
