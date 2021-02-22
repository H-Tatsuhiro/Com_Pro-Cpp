#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int t; cin >> t;
    for (int c = 0; c < t; c++) {
        long long int l, r; cin >> l >> r;
        if (r < 2 * l) cout << 0 << endl;
        else cout << (long long int)((r - 2 * l + 1) * (r - 2 * l + 2) / 2) << endl;
    }
}
