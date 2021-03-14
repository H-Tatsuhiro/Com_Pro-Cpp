#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n; cin >> n;
    vector<int> a(n, 0);
    vector<bool> v(n, false);
    for (int i = 0; i < n; i++) cin >> a[i];
    int m = 0, ans = 0;
    for (int i = 0; i < n; i++) if (m < a[i]) ans++, m = a[i];
    cout << ans << endl;
}
