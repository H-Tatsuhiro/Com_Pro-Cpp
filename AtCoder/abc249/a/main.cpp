#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int a, b, c, d, e, f, x; cin >> a >> b >> c >> d >> e >> f >> x;
    int p = 0, q = 0;
    int n = x, m = 0;
    while(n > 0) {
        if (m < d) n--, m++, q++;
        else n -= f, m = 0;
    }
    n = x, m = 0;
    while(n > 0) {
        if (m < a) n--, m++, p++;
        else n -= c, m = 0;
    }
    p *= b, q *= e;
    if (p == q) cout << "Draw" << endl;
    else if (p < q) cout << "Aoki" << endl;
    else cout << "Takahashi" << endl;
}