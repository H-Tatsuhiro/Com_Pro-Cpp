#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n; cin >> n;
    vector<pair<long long int, long long int>> v(n);
    for (int i = 0; i < n; i++) cin >> v[i].first >> v[i].second;
    long long int ans = 0;
    for (int i = 0; i < n - 2; i++) for (int j = i + 1; j < n - 1; j++) for (int k = j + 1; k < n; k++) if (((v[j].first - v[i].first) * (v[k].second - v[i].second) - (v[k].first - v[i].first) * (v[j].second - v[i].second)) != 0) ans++;
    cout << ans << endl;
}
