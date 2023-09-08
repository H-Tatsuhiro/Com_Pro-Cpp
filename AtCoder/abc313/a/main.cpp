#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n, p; cin >> n >> p;
    int m = -1;
    for (int i = 1; i < n; i++) {
        int q; cin >> q, m = max(m, q);
    }
    cout << (m >= p ? m + 1 - p : 0) << endl;
}


