#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n, l, t, x; cin >> n >> l >> t >> x;
    vector<int> a(n, 0), b(n, 0);
    for (int i = 0; i < n; i++) cin >> a[i] >> b[i];
    long long int ans = 0, stress = 0;
    for (int i = 0; i < n; i++) {
        if (b[i] >= l) {
            if (stress + a[i] < t) stress += a[i], ans += a[i];
            else if (stress + a[i] > t) {
                ans += t - stress;
                ans += x;
                stress = 0;
                if (stress + a[i] < t) stress += a[i], ans += a[i];
                else if (stress + a[i] == t) ans += a[i] + x, stress = 0;
                else {
                    cout << "forever" << endl;
                    return 0;
                }
            }
            else ans += a[i] + x, stress = 0;
        }
        else stress = 0, ans += a[i];
    }
    cout << ans << endl;
    return 0;
}
