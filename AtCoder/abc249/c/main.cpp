#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n, k; cin >> n >> k;
    vector<string> s(n, "");
    for (int i = 0; i < n; i++) cin >> s[i];
    int ans = 0;
    for (int bit = 0; bit < (1 << n); bit++) {
        int tmp = 0;
        vector<int> c(30, 0);
        for (int i = 0; i < n; i++) {
            if (bit & (1 << i)) {
                for (int j = 0; j < s[i].length(); j++) {
                    c[s[i][j] - 'a']++;
                }
            }

        }
        for (int i = 0; i < 30; i++) if (c[i] == k) tmp++;
        ans = max(ans, tmp);
    }
    cout << ans << endl;
}