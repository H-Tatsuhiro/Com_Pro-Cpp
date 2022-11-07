#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <unordered_map>
using namespace std;
int main() {
    int n, x, y, z; cin >> n >> x >> y >> z;
    vector<int> a(n, 0), b(n, 0);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];
    unordered_map<int, bool> passed;
    vector<pair<int, int>> p;
    for (int i = 0; i < n; i++) p.push_back(make_pair(-1 * a[i], i));
    sort(p.begin(), p.end());
    for (int i = 0; i < n && x > 0; i++) passed[p[i].second] = true, x--;
    p.clear();
    for (int i = 0; i < n; i++) if (!passed[i]) p.push_back(make_pair(-1 * b[i], i));
    sort(p.begin(), p.end());
    for (int i = 0; i < n && y > 0; i++) passed[p[i].second] = true, y--;
    p.clear();
    for (int i = 0; i < n; i++) if (!passed[i]) p.push_back(make_pair(-1 * (a[i] + b[i]), i));
    sort(p.begin(), p.end());
    for (int i = 0; i < n && z > 0; i++) passed[p[i].second] = true, z--;
    for (int i = 0; i < n; i++) if (passed[i]) cout << i + 1 << endl;
}
