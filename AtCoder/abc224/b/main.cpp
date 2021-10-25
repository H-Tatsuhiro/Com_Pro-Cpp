#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int h, w; cin >> h >> w;
    vector<vector<int>> a(h, vector<int>(w, 0));
    for (int i = 0; i < h; i++) for (int j = 0; j < w; j++) cin >> a[i][j];
    bool t = true;
    for (int i = 0; i < h - 1; i++) {
        for (int j = i + 1; j < h; j++) {
            for (int k = 0; k < w - 1; k++) {
                for (int l = k + 1; l < w; l++) {
                    if (a[i][k] + a[j][l] > a[j][k] + a[i][l]) t = false;
                }
            }
        }
    }
    cout << (t ? "Yes" : "No") << endl;
}
