#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n, m; cin >> n >> m;
    vector<int> b(m + 1, 0);
    for (int i = 0; i < n; i++) {
        int a; cin >> a; b[a]++;
    }
    int ans = 0;
    for (int i = 1; i <= m; i++) ans = max(ans, b[i]);
    cout << ans << endl;
}
