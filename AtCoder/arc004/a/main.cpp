#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <iomanip>
using namespace std;
int main() {
    int n; cin >> n;
    long double ans = 0.0;
    vector<pair<long double, long double>> v(n);
    for (int i = 0; i < n; i++) cin >> v[i].first >> v[i].second;
    for (int i = 0; i < n - 1; i++) for (int j = i + 1; j < n; j++) ans = max(ans, sqrt(abs(v[i].first - v[j].first) * abs(v[i].first - v[j].first) + abs(v[i].second - v[j].second) * abs(v[i].second - v[j].second)));
    cout << fixed << setprecision(10) << ans << endl;
}
