#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int a, b, c, d, e; cin >> a >> b >> c >> d >> e;
    int t = 0, f = 0;
    while (b > 0) {
        b -= d, t++;
    }
    while (c > 0) {
        c -= e, f++;
    }
    cout << a - max(t, f) << endl;
}
