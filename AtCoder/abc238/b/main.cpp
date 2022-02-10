#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n; cin >> n;
    vector<int> a(n, 0);
    for (int i = 0; i < n; i++) cin >> a[i];
    int ans = 0;
    vector<int> b;
    for (int i = 0; i < n; i++) {
        ans += a[i];
        ans %= 360;
        b.push_back(ans);
    }
    b.push_back(0);
    sort(b.begin(), b.end());;
    b.push_back(360);
    ans = 0;
    for (int i = 0; i < b.size() - 1; i++) ans = max(ans, abs(b[i] - b[i + 1]));
    cout << ans << endl;
}
