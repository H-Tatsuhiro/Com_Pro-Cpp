#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n, x; cin >> n >> x;
    vector<int> a(n - 1, 0);
    int sum = 0;
    for (int i = 0; i < n - 1; i++) cin >> a[i], sum += a[i];
    sort(a.begin(), a.end());
    for (int i = 0; i <= 100; i++) {
        int ans = sum + i;
        if (i < a[0]) ans -= (i + a[n - 2]);
        else if (i >= a[n - 2]) ans -= (a[0] + i);
        else ans -= (a[0] + a[n - 2]);
        if (ans >= x) {
            cout << i << endl;
            return 0;
        }
    }
    cout << -1 << endl;
    return 0;
}


