#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n; cin >> n;
    vector<string> s(n, "");
    int ans = 0, x = 0, y = 0, z = 0;
    for (int i = 0; i < n; i++) {
        cin >> s[i];
        for (int j = 0; j < s[i].length() - 1; j++) if (s[i][j] == 'A' && s[i][j + 1] == 'B') ans++;
        if (s[i][0] == 'B' && s[i][s[i].length() - 1] == 'A') z++;
        else if (s[i][0] == 'B') y++;
        else if (s[i][s[i].length() - 1] == 'A') x++;
    }
    if (z == 0) ans += min(x, y);
    else {
        if (x == 0 && y == 0) ans += z - 1;
        else ans += z + min(x, y);
    }
    cout << ans << endl;
}
