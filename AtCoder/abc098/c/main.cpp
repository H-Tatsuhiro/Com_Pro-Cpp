#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n; string s; cin >> n >> s;
    int ans = n + 1;
    vector<int> e(n, 0), w(n, 0);
    for (int i = 0; i < n; i++) (s[i] == 'E' ? e[i] : w[i]) = 1;
    for (int i = 1; i < n; i++) w[i] += w[i - 1], e[i] += e[i - 1];
    for (int i = 0; i < n; i++) {
        int cnt = 0;
        if (i) cnt += w[i - 1];
        cnt += e[n - 1] - e[i];
        ans = min(ans, cnt);
    }
    cout << ans << endl;
}
