#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n, m; cin >> n >> m;
    vector<bool> v(n, true);
    for (int i = 0; i < m; i++) {
        int a, b; cin >> a >> b, v[b - 1] = false;
    }
    vector<int> ans;
    for (int i = 0; i < n; i++) if (v[i]) ans.push_back(i + 1);
    cout << (ans.size() == 1 ? ans[0] : -1) << endl;
}


