#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n, ans = 0; cin >> n;
    vector<int> cnt(n, 0);
    for (int i = 0; i < n; i++) {
        int x, y; cin >> x >> y;
        cnt[i] = ans;
        int sum = cnt[i] - cnt[i - x];
        if (sum >= y) ans++;
    }
    cout << ans << endl;
}
