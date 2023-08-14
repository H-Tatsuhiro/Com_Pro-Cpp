#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n; cin >> n;
    vector<pair<long double, long double>> v(n);
    for (int i = 0; i < n; i++) cin >> v[i].first >> v[i].second;
    vector<pair<long double, int>> p;
    for (int i = 0; i < n; i++) p.push_back(make_pair(v[i].first / (v[i].first + v[i].second), - 1 * (i + 1)));
    sort(p.begin(), p.end());
    for (int i = p.size() - 1; i >= 0; i--) cout << -1 * p[i].second << (i == 0 ? '\n' : ' ');
}


