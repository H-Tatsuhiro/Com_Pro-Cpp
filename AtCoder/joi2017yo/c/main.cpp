#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n, m, d, cnt = 0; cin >> n >> m >> d;
    vector<string> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (v[i][j] == '#') continue;
            else {
                bool t = true;
                for (int k = 0; k < d; k++) {
                    if (j + k >= m || v[i][j + k] == '#') {
                        t = false;
                        break;
                    }
                }
                if (t) cnt++;
            }
        }
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (v[j][i] == '#') continue;
            else {
                bool t = true;
                for (int k = 0; k < d; k++) {
                    if (j + k >= n || v[j + k][i] == '#') {
                        t = false;
                        break;
                    }
                }
                if (t) cnt++;
            }
        }
    }

    cout << cnt << endl;
}
