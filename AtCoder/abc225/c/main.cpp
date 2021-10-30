#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n, m; cin >> n >> m;
    vector<vector<int>> b(n, vector<int>(m, 0)), x(n, vector<int>(m, 0)), y(n, vector<int>(m, 0));
    for (int i = 0; i < n; i++) for (int j = 0; j < m; j++) cin >> b[i][j];
    bool t = true;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            x[i][j] = (b[i][j] + 6) / 7;
            y[i][j] = (b[i][j] - 1) % 7 + 1;
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (i > 0 && x[i][j] != x[i - 1][j] + 1) t = false;
            if (j > 0 && y[i][j] != y[i][j - 1] + 1) t = false;
        }
    }
    cout << (t ? "Yes" : "No") << endl;
}
