#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <stack>
using namespace std;
int main() {
    int h, w, c, q; cin >> h >> w >> c >> q;
    vector<long long int> cnt(c, 0);
    unordered_map<int, bool> Map_x, Map_y;
    stack<int> x, y, z;
    for (int i = 0; i < q; i++) {
        int xx, yy, zz; cin >> xx >> yy >> zz;
        x.push(xx), y.push(yy), z.push(zz);
    }
    for (int i = 0; i < q; i++) {
        int t = x.top(), n = y.top(), cc = z.top();
        x.pop(), y.pop(), z.pop();
        if (t == 1) {
            if (!Map_x[n]) cnt[cc - 1] += w, h--, Map_x[n] = true;
        }
        else {
            if (!Map_y[n]) cnt[cc - 1] += h, w--, Map_y[n] = true;
        }
    }
    for (int i = 0; i < c; i++) cout << cnt[i] << (i == c - 1 ? '\n' : ' ');
}