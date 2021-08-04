#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <unordered_map>
using namespace std;
int main() {
    int n; cin >> n;
    vector<int> a(n, 0), b(n, 0), c(n, 0);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];
    for (int i = 0; i < n; i++) cin >> c[i];
    unordered_map<int, int> Map;
    unordered_map<int, int> Map_t;
    for (int i = 0; i < n; i++) Map[c[i]]++, Map_t[a[i]]++;
    long long int ans = 0;
    for (int i = 0; i < n; i++) {
        ans += Map_t[b[i]] * Map[i + 1];
    }
    cout << ans << endl;
}
