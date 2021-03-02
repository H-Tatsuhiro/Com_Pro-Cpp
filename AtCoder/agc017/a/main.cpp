#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n, p; cin >> n >> p;
    vector<int> a(n, 0);
    bool t = true;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] % 2 != 0) t = false;
    }
    long long int ans = pow(2, n - 1);
    if (t) {
        if (p == 0) ans = pow(2, n);
        else ans = 0;
    }
    cout << ans << endl;
}
