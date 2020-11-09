#include <iostream>
#include <string>
using namespace std;
int main() {
    string n; cin >> n;
    int m = n.length();
    int ans = 100;
    for (int bit = 0; bit < (1 << m); bit++) {
        int num = 0;
        for (int i = 0; i < m; i++) if (bit & (1 << i)) num += n[i] - '0';
        if (num % 3 == 0 && num > 0) ans = min(ans, m - __builtin_popcount(bit));
    }
    if (ans == 100) cout << -1 << endl;
    else cout << ans << endl;
}
