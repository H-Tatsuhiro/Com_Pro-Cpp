#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n; cin >> n;
    vector<int> r(n, 0), c(n, 0);
    for (int i = 0; i < n; i++) cin >> r[i];
    for (int i = 0; i < n; i++) cin >> c[i];
    int q; cin >> q;
    vector<char> ans(q, '.');
    for (int i = 0; i < q; i++) {
        int x, y; cin >> x >> y;
        if (r[x - 1] + c[y - 1] >= n + 1) ans[i] = '#';
    }
    for (auto a: ans) cout << a;
    cout << endl;
}
