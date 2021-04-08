#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int h, w, x, y; cin >> h >> w >> x >> y;
    vector<string> v(h, "");
    for (int i = 0; i < h; i++) cin >> v[i];
    long long int ans = 1;
    x--, y--;
    for (int i = x - 1; i >= 0; i--) {
        if (v[i][y] == '.') ans++;
        else break;
    }
    for (int i = x + 1; i < h; i++) {
        if (v[i][y] == '.') ans++;
        else break;
    }
    for (int i = y - 1; i >= 0; i--) {
        if (v[x][i] == '.') ans++;
        else break;
    }
    for (int i = y + 1; i < w; i++) {
        if (v[x][i] == '.') ans++;
        else break;
    }
    cout << ans << endl;
}
