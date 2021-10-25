#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n, m; cin >> n >> m;
    vector<int> a(n, 0);
    for (int i = 0; i < n; i++) cin >> a[i];
    vector<bool> v(10e6 + 1, false);
    function<vector<int>(int)> calc = [&](int p){
        int q = p;
        vector<int> res;
        for (int l = 2; l <= sqrt(q); l++) {
            if (p % l == 0) res.push_back(l);
            while (p % l == 0) p /= l;
        }
        if (p > 1) res.push_back(p);
        return res;
    };
    for (int i = 0; i < n; i++) {
        vector<int> w = calc(a[i]);
        for (int y: w) v[y] = true;
    }
    for (int i = 2; i < m; i++) if (v[i]) for (int j = i + i; j <= m; j += i) v[j] = true;
    vector<int> ans;
    for (int i = 1; i <= m; i++) if (!v[i]) ans.push_back(i);
    cout << ans.size() << endl;
    for (int i = 0; i < ans.size(); i++) cout << ans[i] << endl;
}
