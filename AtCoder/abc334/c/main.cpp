#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n, k; cin >> n >> k;
    vector<int> a(k, 0);
    for (int i = 0; i < k; i++) cin >> a[i];
    int ans = 0;
    if (k % 2 == 0) for (int i = 0; i < k; i += 2) ans += a[i + 1] - a[i];
    else {
        vector<int> v, w(n, 2);
        for (int i = 0; i < k; i++) w[a[i] - 1]--;
        for (int i = 0; i < n; i++) for (int j = 0; j < w[i]; j++) v.push_back(i);
        int x = 0;
        for (int i = 0; i < v.size() / 2; i++) x += v[2 * i + 2] - v[2 * i + 1];
        ans = x;
        for (int i = 2; i < v.size(); i += 2)  x += v[i - 1] - v[i - 2], x -= v[i] - v[i - 1], ans = min(ans, x);
    }
    cout << ans << endl;
}


