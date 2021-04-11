#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    long double r, x, y; cin >> r >> x >> y;
    long double euc = sqrtl(x * x + y * y);
    if (euc < r) cout << 2 << endl;
    else cout << ceil(euc / r) << endl;
}
