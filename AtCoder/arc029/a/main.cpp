#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n; cin >> n;
    vector<int> t(n, 0);
    int sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> t[i]; sum += t[i];
    }
    int ans = 10e6;
    for (int bit = 0; bit < (1 << n); bit++) {
        int cnt = 0, tmp = 0;
        for (int i = 0; i < n; i++) if (bit & (1 << i)) tmp++, cnt += t[i];
        else ans = min(ans, max(cnt, sum - cnt));
    }
    cout << ans << endl;
}
