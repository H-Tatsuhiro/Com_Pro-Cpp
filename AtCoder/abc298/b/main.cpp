#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector <vector<int>> a(n, vector<int>(n, 0)), b(n, vector<int>(n, 0)), c(n, vector<int>(n, 0));
    for (int i = 0; i < n; i++) for (int j = 0; j < n; j++) cin >> a[i][j];
    for (int i = 0; i < n; i++) for (int j = 0; j < n; j++) cin >> b[i][j];
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < n; j++) for (int k = 0; k < n; k++) c[n - k - 1][j] = a[j][k];
        bool t = true;
        for (int j = 0; j < n; j++) for (int k = 0; k < n; k++) if (c[j][k] == 1 && b[j][k] == 0) t = false;
        if (t) {
            cout << "Yes" << endl;
            return 0;
        }
        a = c;
    }
    cout << "No" << endl;
    return 0;
}


