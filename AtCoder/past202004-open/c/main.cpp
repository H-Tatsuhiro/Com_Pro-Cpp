#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n; cin >> n;
    vector<string> v(n, "");
    for (int i = 0; i < n; i++) cin >> v[i];
    for (int i = n - 1; i >= 1; i--) {
        for (int j = 0; j <= 2 * n - 2; j++) {
            if (j == 0) {
                if (v[i][j] == 'X') {
                    for (int k = 0; k <= 1; k++) if (v[i - 1][j + k] == '#') v[i - 1][j + k] = 'X';
                }
            }
            else if (j == 2 * n - 2) {
                if (v[i][j] == 'X') {
                    for (int k = -1; k <= 0; k++) if (v[i - 1][j + k] == '#') v[i - 1][j + k] = 'X';
                }
            }
            else {
                if (v[i][j] == 'X') {
                    for (int k = -1; k <= 1; k++) if (v[i - 1][j + k] == '#') v[i - 1][j + k] = 'X';
                }
            }
        }
    }
    for (int i = 0; i < n; i++) cout << v[i] << endl;
}
