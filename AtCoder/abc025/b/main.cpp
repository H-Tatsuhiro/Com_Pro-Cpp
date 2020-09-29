#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n, a, b; cin >> n >> a >> b;
    int m = 0;
    for (int i = 0; i < n; i++) {
        string s; int d, c = 0; cin >> s >> d;
        if (s == "East") c = 1;
        else c = -1;
        if (d < a) c *= a;
        else if (a <= d && d <= b) c *= d;
        else c *= b;
        m += c;
    }
    if (m == 0) cout << 0 << endl;
    else if (m < 0) cout << "West " << abs(0 - m) << endl;
    else cout << "East " << abs(0 - m) << endl;
}
