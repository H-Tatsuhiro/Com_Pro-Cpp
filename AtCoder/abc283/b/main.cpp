#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n, q; cin >> n;
    vector<int> a(n, 0);
    for (int i = 0; i < n; i++) cin >> a[i];
    cin >> q;
    for (int i = 0; i < q; i++) {
        int p; cin >> p;
        if (p == 1) {
            int x, y; cin >> x >> y;
            a[x - 1] = y;
        }
        else {
            int x; cin >> x;
            cout << a[x - 1] << endl;
        }
    }
}


