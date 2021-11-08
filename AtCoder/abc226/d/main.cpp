#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <set>
#include <numeric>
using namespace std;
int main() {
    int n; cin >> n;
    vector<pair<int, int>> v(n);
    set<pair<int, int>> S;
    for (int i = 0; i < n; i++) cin >> v[i].first >> v[i].second;
    int x = 0, y = 0, g = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j) continue;
            x = v[j].first - v[i].first, y = v[j].second - v[i].second;
            if (x != 0 && y != 0) g = abs(gcd(x, y)), x /= g, y /= g;
            else if (x == 0) y = (y > 0 ? 1 : -1);
            else if (y == 0) x = (x > 0 ? 1 : -1);
            S.insert({x, y});
        }
    }
    cout << S.size() << endl;
}
