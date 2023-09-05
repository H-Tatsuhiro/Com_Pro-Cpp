#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n, m; cin >> n >> m;
    vector<int> p(n, 0), c(n, 0);
    vector<vector<bool>> g(n, vector<bool>(m, false));
    for (int i = 0; i < n; i++) {
        cin >> p[i] >> c[i];
        for (int j = 0; j < c[i]; j++) {
            int f; cin >> f, g[i][f - 1] = true;
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j) continue;
            if (p[j] <= p[i]) {
                bool t = true, tt = false;
                for (int k = 0; k < m; k++) {
                    if (g[i][k] == true && g[j][k] == false) t = false;
                    else if (g[i][k] == false && g[j][k] == true) tt = true;
                }
                if (t && (p[j] < p[i] || tt)) {
                    cout << "Yes" << endl;
                    return 0;
                }
            }
        }
    }
    cout << "No" << endl;
    return 0;
}


