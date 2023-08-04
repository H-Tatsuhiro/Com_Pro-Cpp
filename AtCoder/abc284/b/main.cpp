#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int t; cin >> t;
    for (int i = 0; i < t; i++) {
        int n, ans = 0; cin >> n;
        vector<int> a(n, 0);
        for (int j = 0; j < n; j++) cin >> a[j];
        for (int j = 0; j < n; j++) if (a[j] % 2 != 0) ans++;
        cout << ans << endl;
    }
}


