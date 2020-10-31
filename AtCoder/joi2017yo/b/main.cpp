#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n, m, ans = 0; cin >> n >> m;
    vector<int> diff;
    int cnt = 0;
    for (int i = 0; i < m; i++) {
        int a, b; cin >> a >> b;
        if (a >= n) {
            cnt++;
            continue;
        }
        diff.push_back(n - a);
    }
    sort(diff.begin(), diff.end());
    for (int i = 0; i < (m - 1) - cnt; i++) ans += diff[i];
    cout << ans << endl;
}
