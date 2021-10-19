#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <unordered_map>
using namespace std;
int main() {
    int n; cin >> n;
    vector<int> a(n, 0);
    for (int i = 0; i < n; i++) cin >> a[i];
    unordered_map<int, int> Map;
    for (int i = 0; i < n; i++) Map[a[i]]++;
    int cnt = -1, ans = -1;
    for (int i = 0; i < n; i++) if (cnt < Map[a[i]]) cnt = Map[a[i]], ans = a[i];
    cout << ans << " " << cnt << endl;
}
