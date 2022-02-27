#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n; cin >> n;
    vector<int> a(n, 0), b(n, 0);
    for (int i = 0; i < n; i++) {
        int c, p; cin >> c >> p;
        if (c == 1) a[i] = p;
        else b[i] = p;
    }
    vector<int> s(n + 1, 0), t(n + 1, 0);
    for (int i = 1; i <= a.size(); i++) s[i] = s[i - 1] + a[i - 1];
    for (int i = 1; i <= b.size(); i++) t[i] = t[i - 1] + b[i - 1];
    int q; cin >> q;
    for (int i = 0; i < q; i++) {
        int l, r; cin >> l >> r;
        int x = s[r] - s[l - 1], y = t[r] - t[l - 1];
        cout << x << ' ' << y << endl;
    }
}
