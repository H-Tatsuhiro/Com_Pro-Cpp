#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <iomanip>
using namespace std;
int main() {
    int n; cin >> n;
    long double ans = -0.0000000001;
    vector<pair<int, int>> p(n, make_pair(0, 0));
    for (int i = 0; i < n; i++) cin >> p[i].first >> p[i].second;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            int a = abs(p[i].first - p[j].first), b = abs(p[i].second - p[j].second);
            long double c = sqrt(a * a + b * b);
            ans = max(ans, c);
        }
    }
    cout << fixed << setprecision(10) << ans << endl;
}
