#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n, m; cin >> n >> m;
    vector<int> a(n, 0), b(m, 0), c;
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < m; i++) cin >> b[i];
    for (int i = 0; i < n; i++) {
        bool t = false;
        for (int j = 0; j < m; j++) if (a[i] == b[j]) t = true;
        if (t) c.push_back(a[i]);
    }
    sort(c.begin(), c.end());
    for (int i = 0; i < c.size(); i++) cout << c[i] << " ";
}
