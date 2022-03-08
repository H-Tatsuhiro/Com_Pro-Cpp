#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int h, w; cin >> h >> w;
    vector<vector<int>> a(h, vector<int>(w, 0)), b(h, vector<int>(w, 0));
    for (int i = 0; i < h; i++) for (int j = 0; j < w; j++) cin >> a[i][j];
    for (int i = 0; i < h; i++) for (int j = 0; j < w; j++) cin >> b[i][j];
    long long int ans = 0;
    for (int i = 0; i < h - 1; i++) {
        for (int j = 0; j < w - 1; j++) {
            int d = b[i][j] - a[i][j];
            a[i][j] += d, a[i + 1][j] += d, a[i][j + 1] += d, a[i + 1][j + 1] += d, ans += abs(d);
        }
    }
    if (a == b) cout << "Yes" << endl << ans << endl;
    else cout << "No" << endl;
}
