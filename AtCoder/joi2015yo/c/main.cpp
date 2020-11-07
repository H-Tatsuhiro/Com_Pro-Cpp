#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int h, w; cin >> h >> w;
    vector<string> v(h, "");
    vector<vector<int>> ans(h, vector<int>(w, 0));
    for (int i = 0; i < h; i++) cin >> v[i];
    for (int i = 0; i < h; i++) {
        int cnt = 0; bool t = false;
        for (int j = 0; j < w; j++) {
            if (!t && v[i][j] == '.') ans[i][j] = -1;
            if (!t && v[i][j] == 'c') t = true, ans[i][j] = cnt, cnt++;
            else if (t && v[i][j] == '.') ans[i][j] = cnt, cnt++;
            else if (t && v[i][j] == 'c') cnt = 0, v[i][j] = cnt, cnt++;
        }
    }
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            if (j != w - 1) cout << ans[i][j] << " ";
            else cout << ans[i][j] << endl;
        }
    }
}
