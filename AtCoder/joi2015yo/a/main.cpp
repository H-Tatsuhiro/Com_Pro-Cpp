#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int a, b, c, d, e; cin >> a >> b >> c >> d >> e;
    int x = a * e, y = b;
    if (e > c) y += (e - c) * d;
    cout << min(x, y) << endl;
}
