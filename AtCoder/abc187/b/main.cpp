#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n; cin >> n;
    vector<pair<long double, long double>> v(n);
    for (int i = 0; i < n; i++) cin >> v[i].first >> v[i].second;
    int ans = 0;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            long double a = (v[i].second - v[j].second) / (v[i].first - v[j].first);
            if (-1 <= a && a <= 1) ans++;
        }
    }
    cout << ans << endl;
}
