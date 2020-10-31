#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n, ans = 0, cnt = 0; cin >> n;
    vector<int> v(n + 1, 0);
    for (int i = 0; i < n; i++) cin >> v[i];
    for (int i = 0; i <= n; i++) {
        if (v[i] == 1) cnt++;
        else {
            ans = max(ans, cnt);
            cnt = 0;
        }
    }
    cout << ans + 1 << endl;
}
