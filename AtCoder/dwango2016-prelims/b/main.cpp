#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n; cin >> n;
    vector a(n - 1, 0), ans(n, 0);
    for (int i = 0; i < n - 1; i++) cin >> a[i];
    ans[0] = a[0], ans[1] = a[0];
    for (int i = 1; i < n - 1; i++) {
        if (a[i - 1] < a[i]) ans[i + 1] = a[i];
        else if (a[i - 1] > a[i]) ans[i] = ans[i + 1] = a[i];
        else ans[i + 1] = a[i];
    }
    for (int i = 0; i < n; i++) cout << ans[i] << (i == n - 1 ? '\n' : ' ');
}
