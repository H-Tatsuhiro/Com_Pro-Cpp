#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n, p; cin >> n >> p;
    vector<int> a(n, 0);
    for (int i = 0; i < n; i++) cin >> a[i];
    int ans = 0;
    for (int i = 0; i < n; i++) if (a[i] < p) ans++;
    cout << ans << endl;
}
