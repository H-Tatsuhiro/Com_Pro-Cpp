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
    bool t = false;
    for (int i = 0; i < n - 1; i++) {
        if (a[i] + 1 != a[i + 1]) {
            t = true;
            cout << a[i] + 1 << endl;
        }
    }
    if (!t) cout << a[n - 1] + 1 << endl;
}


