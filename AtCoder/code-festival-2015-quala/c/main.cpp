#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n, t; cin >> n >> t;
    vector<pair<int, int>> p(n, make_pair(0, 0));
    vector<int> q(n,0);
    int sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> p[i].first >> p[i].second;
        q[i] = p[i].first - p[i].second, sum += p[i].first;
    }
    sort(q.begin(), q.end());
    reverse(q.begin(), q.end());
    int ans = 0;
    if (sum <= t) {
        cout << ans << endl;
        return 0;
    }
    for (int i = 0; i < n; i++) {
        sum -= q[i], ans++;
        if (sum <= t) {
            cout << ans << endl;
            return 0;
        }
    }
    cout << -1 << endl;
    return 0;

}
