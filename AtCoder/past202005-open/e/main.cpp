#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n, m, q; cin >> n >> m >> q;
    vector<vector<int>> spr(n);
    for (int i = 0; i < m; i++) {
        int a, b; cin >> a >> b; a--, b--;
        spr[a].push_back(b), spr[b].push_back(a);
    }
    vector<int> color(n, 0);
    for (int i = 0; i < n; i++) cin >> color[i];
    for (int i = 0; i < q; i++) {
        int c; cin >> c;
        if (c == 1) {
            int x; cin >> x;
            cout << color[x - 1] << endl;
            for (auto z : spr[x - 1]) color[z] = color[x - 1];
        }
        else {
            int x, y; cin >> x >> y;
            cout << color[x - 1] << endl;
            color[x - 1] = y;
        }
    }
}
