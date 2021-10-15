#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    string s; int t; cin >> s >> t;
    int x = 0, y = 0, cnt = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'L') x--;
        else if (s[i] == 'R') x++;
        else if (s[i] == 'U') y++;
        else if (s[i] == 'D') y--;
        else cnt++;
    }
    int ans = abs(x) + abs(y) + (t == 1 ? cnt : -1 * cnt);
    if (t == 2) ans = max(ans, (int)s.length() % 2);
    cout << ans << endl;
}
