#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int w, h, n, ans = 0; cin >> w >> h >> n;
    vector<pair<int, int>> v(n);
    for (int i = 0; i < n; i++) cin >> v[i].first >> v[i].second;
    for (int i = 1; i < n; i++) {
        int a = v[i - 1].first, b = v[i].first , c = v[i - 1].second, d = v[i].second;
        int x = abs(a - b), y = abs(c - d);
        int sum = x + y;
        if ((a < b && c < d) || (a > b && c > d)) ans += max(x, y);
        else ans += sum;
    }
    cout << ans << endl;
}
