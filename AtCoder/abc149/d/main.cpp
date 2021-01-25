#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n, k, r, s, p; string t; cin >> n >> k >> r >> s >> p >> t;
    vector<string> str(101010, "");
    for (int i = 0; i < n; i++) str[i % k] += t[i];
    long long int ans = 0;
    for (int i = 0; i < k; i++) {
        int a = 0, b = 0, c = 0;
        if (str[i][0] == 'r') c = p;
        if (str[i][0] == 's') a = r;
        if (str[i][0] == 'p') b = s;
        int q = str[i].length();
        for (int j = 1; j < q; j++) {
            int x = max(c, b), y = max(a, c), z = max(b, a);
            if (str[i][j] == 'r') z += p;
            if (str[i][j] == 's') x += r;
            if (str[i][j] == 'p') y += s;
            a = x, b = y, c = z;
        }
        ans += max({a, b, c});
    }
    cout << ans << endl;
}
