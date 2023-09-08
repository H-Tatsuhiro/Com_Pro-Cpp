#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n; cin >> n;
    vector<int> c(n, 0);
    vector<vector<int>> a(n);
    for (int i = 0; i < n; i++) {
        cin >> c[i], a[i].resize(c[i]);
        for (int j = 0; j < c[i]; j++) cin >> a[i][j];
    }
    int x; cin >> x;
    vector<int> v, ans;
    int m = 40;
    for (int i = 0; i < n; i++) for (int &p: a[i]) if (p == x) v.push_back(i), m = min(m, c[i]);
    for (int i = 0; i < v.size(); i++) if (m == c[v[i]]) ans.push_back(v[i]);
    cout << ans.size() << endl;
    for (int i = 0; i < ans.size(); i++) cout << ans[i] + 1 << (i == ans.size() - 1 ? '\n' : ' ');
}


