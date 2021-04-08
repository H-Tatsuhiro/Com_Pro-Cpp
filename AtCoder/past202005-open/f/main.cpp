#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n; cin >> n;
    vector<string> a(n, "");
    for (int i = 0; i < n; i++) cin >> a[i];
    string ans = "";
    for (int i = 0; i < n / 2; i++) {
        bool t = false;
        string x = a[i], y = a[n - 1 - i];
        for (int j = 0; j < n; j++) {
            for (int k = 0; k < n; k++) {
                if (x[j] == y[k]) {
                    t = true;
                    ans += x[j];
                    break;
                }
            }
            if (t) break;
        }
        if (!t) break;
    }
    string s = ans;
    reverse(s.begin(), s.end());
    if (n % 2 != 0) ans += a[n / 2][0];
    ans += s;
    if (ans.length() != n) cout << -1 << endl;
    else cout << ans << endl;
}
