#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n, b, c; cin >> n >> b >> c;
    vector<int> a(n, 0);
    for (int i = 0; i < n; i++) cin >> a[i];
    int sum = 0, ans = 0;
    for (int i = n - 1; i >= 0; i--) {
        int x = c - sum;
        if (x >= b) sum += b, ans += a[i] * b;
        else {
            ans += a[i] * x;
            break;
        }
    }
    cout << ans << endl;
}
