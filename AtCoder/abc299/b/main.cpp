#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n, t; cin >> n >> t;
    vector<int> c(n, 0), r(n, 0);
    for (int i = 0; i < 2 * n; i++) cin >> (i < n ? c[i] : r[i - n]);
    pair<int, int> p = make_pair(-1, -1);
    for (int i = 0; i < n; i++) if (t == c[i] && p.first < r[i]) p.second = i + 1, p.first = r[i];
    if (p.second == -1) {
        p.first = r[0], p.second = 1;
        for (int i = 1; i < n; i++) if (c[0] == c[i] && p.first < r[i]) p.second = i + 1, p.first = r[i];
    }
    cout << p.second << endl;
}


