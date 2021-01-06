#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int a, b; cin >> a >> b;
    string x = to_string(a), y = to_string(b);
    int ans = -10000;
    for (int i = 100; i <= 999; i++) {
        string s = to_string(i); int p = 0;
        for (int k = 0; k < s.length(); k++) if (s[k] != x[k]) p++;
        if (p > 1) continue;
        else ans = max(ans , i - b);
    }
    for (int i = 100; i <= 999; i++) {
        string s = to_string(i); int p = 0;
        for (int k = 0; k < s.length(); k++) if (s[k] != y[k]) p++;
        if (p > 1) continue;
        else ans = max(ans , a - i);
    }
    cout << ans << endl;
}
