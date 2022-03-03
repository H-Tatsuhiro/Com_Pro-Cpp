#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n; cin >> n;
    vector<int> a(n, 0);
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a.begin(), a.end());
    int q; cin >> q;
    for (int i = 0; i < q; i++) {
        int b; cin >> b;
        auto it = lower_bound(a.begin(), a.end(), b);
        if (it == a.end()) cout << abs(b - a[n - 1]) << endl;
        else {
            int c = *it;
            if (*it == a[0]) {
                cout << abs(c - b) << endl;
                continue;
            }
            it--;
            int d = *it;
            cout << min(abs(b - c), abs(b - d)) << endl;
        }
    }
}
