#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n; cin >> n;
    vector<int> p(n, 0);
    for (int i = 0; i < n; i++) cin >> p[i];
    int ans = 0;
    for (int i = 0; i < n - 1; i++) {
        if (p[i] == i + 1) {
            ans++;
            swap(p[i], p[i + 1]);
        }
    }
    if (p[n - 1] == n) ans++;
    cout << ans << endl;
}
