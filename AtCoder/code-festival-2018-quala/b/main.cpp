#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n, m, a, b; cin >> n >> m >> a >> b;
    vector<bool> t(n, false);
    for (int i = 0; i < m; i++) {
        int x, y; cin >> x >> y;
        for (int j = x - 1; j < y; j++) t[j] = true;
    }
    int cnt = 0;
    for (int i = 0; i < n; i++) if (t[i]) cnt++;
    cout << cnt * a + (n - cnt) * b << endl;
}
