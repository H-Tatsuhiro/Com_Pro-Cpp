#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <functional>
using namespace std;
int main() {
    int h, w; cin >> h >> w;
    vector<vector<int>> a(h, vector<int>(w, 0));
    for (int i = 0; i < h; i++) for (int j = 0; j < w; j++) cin >> a[i][j];
    long long int ans = 0;
    vector<int> u;
    function<void(int, int, vector<int>)> bfs = [&](int x, int y, vector<int> v){
        v.push_back(a[x][y]);
        if (x == h - 1 && y == w - 1) {
            sort(v.begin(), v.end());
            for (int i = 0; i < v.size() - 1; i++) if (v[i] == v[i + 1]) return 0;
            ans++;
            return 0;
        }
        else {
            if (x + 1 < h) bfs(x + 1, y, v);
            if (y + 1 < w) bfs(x, y + 1, v);
            return 0;
        }
    };
    bfs(0, 0, u);
    cout << ans << endl;
}


