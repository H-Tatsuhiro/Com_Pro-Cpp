#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int h, w; cin >> h >> w;
    vector<vector<int>> a(h, vector<int>(w, 0));
    for (int i = 0; i < h; i++) for (int j = 0; j < w; j++) cin >> a[i][j];
    vector<vector<int>> b(w, vector<int>(h, 0));
    for (int i = 0; i < h; i++) for (int j = 0; j < w; j++) b[j][i] = a[i][j];
    for (int i = 0; i < w; i++) {
        for (int j = 0; j < h; j++) {
            if (j != h - 1) cout << b[i][j] << " ";
            else cout << b[i][j] << endl;
        }
    }
}
