#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <unordered_map>
using namespace std;
int main() {
    int a, b, c, d, x; cin >> a >> b >> c >> d >> x;
    vector<int> v = {a, b}, w = {c, d};
    bool t = false, f = false;
    if (v[0] == x || v[1] == x) t = true;
    if (w[0] == x || w[1] == x) f = true;
    vector<int> ans;
    if (t && f) {
        unordered_map<int, bool> Map;
        for (int i = 0; i < 2; i++) {
            if (v[i] != x && !Map[v[i]]) ans.push_back(v[i]), Map[v[i]] = true;
            if (w[i] != x && !Map[w[i]]) ans.push_back(w[i]), Map[w[i]] = true;
        }
        ans.push_back(x);
    }
    else if (t) {
        if (w[0] == w[1]) ans.push_back(w[0]);
        else ans.push_back(w[0]), ans.push_back(w[1]);
    }
    else if (f) {
        if (v[0] == v[1]) ans.push_back(v[0]);
        else ans.push_back(v[0]), ans.push_back(v[1]);
    }
    cout << ans.size() << endl;
    sort(ans.begin(), ans.end());
    for (int i = 0; i < ans.size(); i++) cout << ans[i] << endl;
}
