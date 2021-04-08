#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int h, w; cin >> h >> w;
    vector<pair<int, int>> s;
    vector<vector<char>> t(h, vector<char>(w, '-'));
    for (int i = 0; i < h; i++) for (int j = 0; j < w; j++) cin >> t[i][j];
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            char c; cin >> c;
            if (c == '#') s.push_back(make_pair(i, j));
        }
    }
    bool tt = false;
    for (int rotate = 0; rotate < 4; rotate++) {
        for (int i = -20; i < 21; i++) {
            for (int j = -20; j < 21; j++) {
                bool f = true;
                for (int k = 0; k < s.size(); k++) {
                    if ((s[k].first + i < 0 || s[k].first + i >= h || s[k].second + j < 0 || s[k].second + j >= w) || t[s[k].first + i][s[k].second + j] == '#') {
                        f = false;
                        break;
                    }
                }
                if (f) {
                    tt = true;
                    break;
                }
            }
        }
        for (int i = 0; i < s.size(); i++) {
            int a = s[i].first, b = s[i].second;
            s[i] = make_pair(b, -a);
        }
    }
    if (tt) cout << "Yes" << endl;
    else cout << "No" << endl;
}
