#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int h, w; cin >> h >> w;
    long long int ans = 0, minn = 10e7;
    vector<vector<long long int>> v(h, vector<long long int>(w, 0));
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            cin >> v[i][j];
            minn = min(minn, v[i][j]);
        }
    }
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            if (v[i][j] > minn) ans += v[i][j] - minn;
        }
    }
    cout << ans << endl;
}
