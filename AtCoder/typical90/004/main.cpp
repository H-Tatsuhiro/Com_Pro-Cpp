#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int h, w; cin >> h >> w;
    vector<vector<int>> a(h, vector<int>(w, 0));
    vector<int> H(h, 0), W(w, 0);
    for (int i = 0; i < h; i++) for (int j = 0; j < w; j++) cin >> a[i][j], H[i] += a[i][j], W[j] += a[i][j];
    for (int i = 0; i < h; i++) for (int j = 0; j < w; j++) cout << H[i] + W[j] - a[i][j] << (j == w - 1 ? '\n' : ' ');
}
