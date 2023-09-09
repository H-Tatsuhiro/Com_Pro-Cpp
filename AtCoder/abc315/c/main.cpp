#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n; cin >> n;
    vector<int> a(n, 0), b(n, 0);
    for (int i = 0; i < n; i++) {
        int p, q; cin >> p >> q, p--;
        if (a[p] < q) b[p] = a[p], a[p] = q;
        else if (b[p] < q) b[p] = q;
    }
    int x = 0, y = 0, m = 0;
    for (int i = 0; i < n; i++) {
        if (x < a[i]) y = x, x = a[i];
        else if (y < a[i]) y = a[i];
        if (b[i] != 0) m = max(m, a[i] + b[i] / 2);
    }
    cout << max(x + y, m) << endl;
}


