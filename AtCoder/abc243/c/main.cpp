#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <unordered_map>
using namespace std;
int main() {
    int n; cin >> n;
    vector<int> x(n, 0), y(n, 0);
    for (int i = 0; i < n; i++) cin >> x[i] >> y[i];
    string s; cin >> s;
    bool t = false;
    unordered_map<int, int> Map_l, Map_r;
    unordered_map<int, bool> M_l, M_r;
    for (int i = 0; i < n; i++) {
        if (!M_l[y[i]]) Map_l[y[i]] = 1000000007, M_l[y[i]] = true;
        if (!M_r[y[i]]) Map_r[y[i]] = -1, M_r[y[i]] = true;
        if (s[i] == 'R') Map_l[y[i]] = min(Map_l[y[i]], x[i]);
        else Map_r[y[i]] = max(Map_r[y[i]], x[i]);
    }
    for (int i = 0; i < n; i++) if (Map_l[y[i]] < Map_r[y[i]]) t = true;
    cout << (t ? "Yes" : "No") << endl;
}
