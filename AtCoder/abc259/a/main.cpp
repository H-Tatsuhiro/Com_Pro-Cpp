#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n, m, x, t, d; cin >> n >> m >> x >> t >> d;
    for (int i = n; i > m; i--) {
        if (i > x) continue;
        t -= d;
    }
    cout << t << endl;
}
