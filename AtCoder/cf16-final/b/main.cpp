#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n, m; cin >> n, m = n;
    vector<int> ans(n + 1, 0);
    for (int i = 1; i <= n; i++) {
        m -= i, ans[i] = i;
        if (m < 0) {
            ans[-m] = -1;
            break;
        }
        else if (m == 0) break;
    }
    for (int i = 1; i <= n; i++) {
        if (ans[i] == -1) continue;
        if (ans[i] == 0) break;
        cout << ans[i] << endl;
    }
}
