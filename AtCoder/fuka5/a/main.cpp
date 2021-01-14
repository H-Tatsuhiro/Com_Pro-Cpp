#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    while(true) {
        int n, m; cin >> n >> m;
        if (n == 0 && m == 0) break;
        vector<int> a(n, 0);
        for (int i = 0; i < n; i++) cin >> a[i];
        int ans = 0;
        sort(a.begin(), a.end());
        for (int j = 0; j < m; j++) ans += a[j];
        cout << ans << endl;
    }
}
