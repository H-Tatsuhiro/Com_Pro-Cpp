#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n; string s; cin >> n >> s;
    vector<long long int> cnt(8, 0);
    for (int i = 0; i < n; i++) {
        if (s[i] == 'R') s[i] = 1;
        else if (s[i] == 'G') s[i] = 2;
        else s[i] = 4;
    }
    long long int ans = 0;
    for (int j = 0; j < n; j++) {
        for (int k = j + 1; k < n; k++) {
            if (s[j] == s[k]) continue;
            int si = 7 - s[j] - s[k];
            ans += cnt[si];
            int i = j - (k - j);
            if (0 <= i) {
                int msk = s[i] | s[j] | s[k];
                if (msk == 7) ans--;
            }
        }
        cnt[s[j]]++;
    }
    cout << ans << endl;
}
