#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <unordered_map>
using namespace std;
int main() {
    int n, t; cin >> n >> t;
    vector<int> a(n, 0);
    for (int i = 0; i < n; i++) cin >> a[i];
    unordered_map<int, int> Map;
    for (int i = 0; i < n; i++) for (int j = a[i]; j <= t; j += a[i]) Map[j]++;
    int ans = 0;
    for (int i = 1; i <= t; i++) ans = max(ans, Map[i]);
    cout << ans << endl;
}
