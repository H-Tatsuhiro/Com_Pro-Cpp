#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n; cin >> n;
    vector<pair<long long int, long long int>> v(n, make_pair(0, 0));
    for (int i = 0; i < n; i++) cin >> v[i].first >> v[i].second;
    long long int ans = 100000000;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            long long int a = v[i].first, b = v[j].second;
            if (i == j) ans = min(ans, a + b);
            else ans = min(ans, max(a, b));
        }
    }
    cout << ans << endl;
}
