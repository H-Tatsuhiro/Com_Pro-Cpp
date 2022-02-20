#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n, m; cin >> n >> m;
    vector<int> p(n, 0);
    for (int i = 0; i < n; i++) cin >> p[i];
    p.push_back(0);
    vector<long long int> s;
    for (int i = 0; i < n + 1; i++) for (int j = 0; j < n + 1; j++) s.push_back(p[i] + p[j]);
    sort(s.begin(), s.end());
    long long int ans = 0;
    for (long long int a: s) {
        auto it = upper_bound(s.begin(), s.end(), m - a);
        if (it == s.begin()) continue;
        ans = max(ans, a + *(it - 1));
    }
    cout << ans << endl;
}
