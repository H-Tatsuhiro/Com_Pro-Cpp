#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <set>
#include <unordered_map>
using namespace std;
int main() {
    int n, k; cin >> n >> k;
    vector<int> c(n, 0);
    unordered_map<int, int> cnt;
    for (int i = 0; i < n; i++) cin >> c[i];
    set<int> S;
    for (int i = 0; i < k; i++) S.insert(c[i]), cnt[c[i]]++;
    auto ans = S.size();
    for (int i = k; i < n; i++) {
        S.insert(c[i]);
        cnt[c[i]]++;
        cnt[c[i - k]]--;
        if (cnt[c[i - k]] == 0) S.erase(c[i - k]);
        ans = max(ans, S.size());
    }
    cout << ans << endl;
}
