#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n, q; cin >> n >> q;
    string s; cin >> s;
    vector<int> p, pp;
    for (int i = 0; i < n - 1; i++) {
        if (s[i] == s[i + 1]) p.push_back(i), pp.push_back(i + 1);
    }
    for (int i = 0; i < q; i++) {
        int l, r; cin >> l >> r;
        auto it = distance(p.begin(), lower_bound(p.begin(), p.end(), l - 1));
        auto it2 = distance(pp.begin(), upper_bound(pp.begin(), pp.end(), r - 1));
        int ans = it2 - it;
        cout << ans << endl;
    }
}


