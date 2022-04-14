#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    string a, b, c; cin >> a >> b >> c;
    vector x(26, 0), y(26, 0), z(26, 0);
    int n = a.length(), m = n / 2;
    for (int i = 0; i < n; i++) x[a[i] - 'A']++, y[b[i] - 'A']++, z[c[i] - 'A']++;
    int lo = 0, li = 0;
    for (int i = 0; i < 26; i++) {
        int p = max(0, z[i] - y[i]), q = min(x[i], z[i]);
        li += q - p, lo += p;
    }
    cout << (lo <= m && m <= lo + li ? "YES" : "NO") << endl;
}
