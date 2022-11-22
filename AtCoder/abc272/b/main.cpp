#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n, m; cin >> n >> m;
    vector<int> v;
    vector<vector<bool>> w(n, vector<bool>(n, false));
    for (int i = 0; i < m; i++) {
        int k; cin >> k;
        v.resize(k);
        for (int j = 0; j < k; j++) cin >> v[j];
        for (int j = 0; j < k - 1; j++) for (int l = j + 1; l < k; l++) w[v[j] - 1][v[l] - 1] = w[v[l] - 1][v[j] - 1] = true;
    }
    bool ans = true;
    for (int i = 0; i < n - 1; i++) for (int j = i + 1; j < n; j++) if (!w[i][j]) ans = false;
    cout << (ans ? "Yes" : "No") << endl;
}
