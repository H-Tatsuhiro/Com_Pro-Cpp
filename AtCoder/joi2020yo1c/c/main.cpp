#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n; cin >> n;
    vector<int> a(n + 1, 0);
    for (int i = 1; i <= n; i++) cin >> a[i];
    int ans = 0;
    for (int i = 1; i <= n - 1; i++) {
        int cnt = 1, f = a[i];
        for (int j = i + 1; j <= n; j++) {
            if (f <= a[j]) cnt = (j - i + 1), f = a[j];
            else break;
        }
        ans = max(ans, cnt);
    }
    if (ans == 0) cout << 1 << endl;
    else cout << ans << endl;
}
