#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int h, w; cin >> h >> w;
    vector<string> a(h, "");
    for (int i = 0; i < h; i++) cin >> a[i];
    vector<int> ans(min(h, w), 0);
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            if (a[i][j] == '#') {
                int k = 1;
                while(k < min(h, w)) {
                    if (i + k >= h || i - k < 0 || j + k >= w || j - k < 0) break;
                    if (a[i + k][j - k] == '#' && a[i + k][j + k] == '#' && a[i - k][j - k] == '#' && a[i - k][j + k] == '#') k++;
                    else break;
                }
                if (k > 1) ans[k - 2]++;
            }
        }
    }
    for (int i = 0; i < min(h, w); i++) cout << ans[i] << (i == min(h, w) - 1 ? '\n' : ' ');
}


