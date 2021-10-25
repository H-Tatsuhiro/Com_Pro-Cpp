#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n; cin >> n;
    vector<vector<int>> c(n, vector<int>(n, 0));
    for (int i = 0; i < n; i++) for (int j = 0; j < n; j++) cin >> c[i][j];
    vector<int> x(n, 0), y(n, 0);
    function<bool()> calc = [&]() -> bool {
        int mx = c[0][0], my = c[0][0];
        for (int i = 0; i < n; i++) mx = min(mx, c[i][0]), my = min(my, c[0][i]);
        for (int i = 0; i < n; i++) x[i] = c[i][0] - mx, y[i] = c[0][i] - my;
        int diff = c[0][0] - (x[0] + y[0]);
        for (int i = 0; i < n; i++) x[i] += diff;
        for (int i = 0; i < n; i++) for (int j = 0; j < n; j++) if (x[i] + y[j] != c[i][j]) return false;
        return true;
    };
    if (calc()) {
        cout << "Yes" << endl;
        for (int i = 0; i < n; i++) cout << x[i] << (i == n - 1 ? '\n' : ' ');
        for (int i = 0; i < n; i++) cout << y[i] << (i == n - 1 ? '\n' : ' ');
    }
    else cout << "No" << endl;
}
