#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <set>
using namespace std;
int main() {
    int n, m; cin >> n >> m;
    vector<vector<int>> v(n + 1);
    vector<int> p;
    for (int i = 0; i < m; i++) {
        int x, y; cin >> x >> y;
        if (x == 1) p.push_back(y);
        else v[x].push_back(y), v[y].push_back(x);
    }
    set<int> S;
    for (auto q: p) {
        S.insert(q);
        for (auto qq: v[q]) S.insert(qq);
    }
    cout << S.size() << endl;
}
