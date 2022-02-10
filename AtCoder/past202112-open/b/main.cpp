#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n; cin >> n;
    vector<int> a(n, 0), b(n, 0);
    for (int i = 0; i < n; i++) cin >> a[i] >> b[i];
    int ans = 0;
    for (int i = 0; i < n; i++) {
        int c = b[i] - a[i];
        while (c >= 100) c -= 100;
        while (c >= 50) c -= 50, ans++;
        while (c >= 10) c -= 10;
        while (c >= 5) c -= 5, ans++;
    }
    cout << ans << endl;
}
