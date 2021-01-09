#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int a, b, c, n; cin >> a >> b >> c >> n;
    if (a < n) a = (n - a);
    else a = 0;
    if (b < 2 * n) b = (2 * n - b);
    else b = 0;
    if (c < 3 * n) c = (3 * n - c);
    else c = 0;
    cout << a << " " << b << " " << c << endl;
}
