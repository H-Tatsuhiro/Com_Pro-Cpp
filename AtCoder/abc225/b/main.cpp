#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n; cin >> n;
    vector<vector<int>> G(n);
    for (int i = 0; i < n - 1; i++) {
        int a, b; cin >> a >> b;
        a--, b--;
        G[a].push_back(b), G[b].push_back(a);
    }
    bool t = false;
    for (int i = 0; i < n; i++) if (G[i].size() == n - 1) t = true;
    cout << (t ? "Yes" : "No") << endl;
}
