#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <set>
#include <functional>
#include <atcoder/dsu>
using namespace atcoder;
using namespace std;
int main() {
    int h, w; cin >> h >> w;
    vector<string> v(h, "");
    for (int i = 0; i < h; i++) cin >> v[i];
    set<pair<int, int>> S;
    vector<int> dx = {-1, -1, 0, 1, 1, 1, 0, -1}, dy = {0, 1, 1, 1, 0, -1, -1, -1};
    function<void(int, int)> f = [&](int x, int y){
        for (int i = 0; i < 8; i++) {
            int nx = x + dx[i], ny = y + dy[i];
            if (!(0 <= nx && nx < h && 0 <= ny && ny < w)) continue;
            if (v[nx][ny] == '#') v[nx][ny] = '.', f(nx, ny);
        }
    };
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            if (v[i][j] == '#') {
                S.insert(make_pair(i, j));
                v[i][j] = '.';
                f(i, j);
            }
        }
    }
    cout << S.size() << endl;
}


