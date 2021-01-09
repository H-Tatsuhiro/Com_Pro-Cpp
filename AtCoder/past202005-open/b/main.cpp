#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n, m, q; cin >> n >> m >> q;
    vector<vector<int>> p(m);
    vector<int> score(n, 0);
    for (int i = 0; i < q; i++) {
        int s; cin >> s;
        if (s == 1) {
            int x; cin >> x;
            cout << score[x - 1] << endl;
        }
        else {
            int x, y; cin >> x >> y;
            score[x - 1] += n - (p[y - 1].size() + 1);
            for (auto j : p[y - 1]) score[j]--;
            p[y - 1].push_back(x - 1);
        }
    }
}
