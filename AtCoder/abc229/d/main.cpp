#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    string s; int k; cin >> s >> k;
    int n = s.length();
    vector<int> cnt(n + 1, 0);
    for (int i = 0; i < n; i++) {
        if (s[i] == '.') cnt[i + 1] = cnt[i] + 1;
        else cnt[i + 1] = cnt[i];
    }
    long long int ans = 0, r = 0;
    for (int l = 0; l < n; l++) {
        while (r < n && cnt[r + 1] - cnt[l] <= k) {
            r++;
        }
        ans = max(ans, r - l);
    }
    cout << ans << endl;
}
