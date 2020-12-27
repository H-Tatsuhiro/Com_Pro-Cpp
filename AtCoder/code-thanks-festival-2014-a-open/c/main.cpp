#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n, m; cin >> n >> m;
    vector<int> p(n, 0), s(m, 0);
    for (int i = 0; i < n; i++) cin >> p[i];
    for (int i = 0; i < m; i++) cin >> s[i];
    long long int ans = 0;
    for (int i = 0; i < m; i++) ans += p[s[i] - 1];
    cout << ans << endl;
}
