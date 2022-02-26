#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    long long int n, x, ans = 0;
    cin >> n >> x;
    vector<vector<long long int>> a(n);
    for (int i = 0; i < n; i++) {
        int m; cin >> m, a[i].resize(m);
        for (int j = 0; j < a[i].size(); j++) cin >> a[i][j];
    }
    function<void(long long int, int)> rec = [&](long long int mp, int i) {
        if (i == n) {
            if (mp == x) ans++;
            return;
        }
        for (int j = 0; j < a[i].size(); j++) {
            if (x / a[i][j] < mp) continue;
            rec(mp * a[i][j], i + 1);
        }
    };
    rec(1, 0);
    cout << ans << endl;
}
