#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n, q; cin >> n >> q;
    vector<int> a(n, 0);
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a.begin(), a.end());
    for (int i = 0; i < q; i++) {
        int x; cin >> x;
        auto it = lower_bound(a.begin(), a.end(), x);
        if (it != a.end()) {
            cout << a.end() - it << endl;
        }
        else {
            cout << 0 << endl;
        }
    }
}
