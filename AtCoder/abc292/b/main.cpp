#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n, q; cin >> n >> q;
    vector<pair<int, int>> v(n, make_pair(0, 0));
    for (int i = 0; i < q; i++) {
        int m, x; cin >> m >> x;
        if (m == 1) v[x - 1].first++;
        else if (m == 2) v[x - 1].second++;
        else cout << (v[x - 1].first >= 2 || v[x - 1].second > 0 ? "Yes" : "No") << endl;
    }
}


