#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n; cin >> n;
    vector<vector<long long int>> v(n, vector<long long int>(3, 0));
    for (int i = 0; i < n; i++) cin >> v[i][0] >> v[i][1] >> v[i][2];
    bool t = false;
    long long int ans = 10000000000;
    for (int i = 0; i < n; i++) {
        if (v[i][2] - v[i][0] > 0) {
            ans = min(ans, v[i][1]);
            t = true;
        }
    }
    if (!t) cout << -1 << endl;
    else cout << ans << endl;
}
