#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n, q; cin >> n >> q;
    vector<vector<int>> v(n);
    for (int i = 0; i < n; i++) {
        int l; cin >> l;
        v[i].resize(l);
        for (int j = 0; j < l; j++) cin >> v[i][j];
    }
    for (int i = 0; i < q; i++) {
        int s, t; cin >> s >> t;
        cout << v[s - 1][t - 1] << endl;
    }
}
