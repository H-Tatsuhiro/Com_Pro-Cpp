#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n; cin >> n;
    vector<string> a(n, "");
    for (int i = 0; i < n; i++) cin >> a[i];
    char x = '.', y = a[0][0];
    for (int i = 0; i < n - 1; i++) x = a[0][i + 1], a[0][i + 1] = y, y = x;
    for (int i = 0; i < n - 1; i++) x = a[i + 1][n - 1], a[i + 1][n - 1] = y, y = x;
    for (int i = n - 1; i >= 1; i--) x = a[n - 1][i - 1], a[n - 1][i - 1] = y, y = x;
    for (int i = n - 1; i >= 1; i--) x = a[i - 1][0], a[i - 1][0] = y, y = x;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) cout << a[i][j];
        cout << endl;
    }
}