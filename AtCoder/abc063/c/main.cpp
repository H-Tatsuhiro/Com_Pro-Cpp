#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n; cin >> n;
    vector<int> s(n, 0);
    long long int ans = 0;
    int a = 101;
    bool t = true;
    for (int i = 0; i < n; i++) {
        cin >> s[i];
        if (s[i] % 10 != 0) {
            t = false;
            a = min(a, s[i]);
        }
        ans += s[i];
    }
    if (t) cout << 0 << endl;
    else if (ans % 10 != 0) cout << ans << endl;
    else cout << ans - a << endl;
    return 0;
}
