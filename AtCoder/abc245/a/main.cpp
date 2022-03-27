#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int a, b, c, d; cin >> a >> b >> c >> d;
    a *= 3600, a += (b * 60), c *= 3600, c += (60 * d) + 1;
    cout << (a < c ? "Takahashi" : "Aoki") << endl;
}
