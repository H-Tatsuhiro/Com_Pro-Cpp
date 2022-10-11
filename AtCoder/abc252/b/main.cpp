#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <unordered_map>
using namespace std;
int main() {
    int n, k; cin >> n >> k;
    vector<int> a(n, 0);
    int m = 0;
    for (int i = 0; i < n; i++) cin >> a[i], m = max(m, a[i]);
    unordered_map<int, bool> Map;
    for (int i = 0; i < k; i++) {
        int b;
        cin >> b, Map[b - 1
        ] = true;
    }
    bool t = false;
    for (int i = 0; i < n; i++) if (m == a[i] && Map[i]) t = true;
    cout << (t ? "Yes" : "No") << endl;
}
