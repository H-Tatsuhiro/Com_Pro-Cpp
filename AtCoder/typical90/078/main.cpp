#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <unordered_map>
using namespace std;
int main() {
    int n, m; cin >> n >> m;
    unordered_map<int, int> Map;
    int ans = 0;
    for (int i = 0; i < m; i++) {
        int a, b; cin >> a >> b, Map[max(a, b)]++;
    }
    for (int i = 1; i <= n; i++) if (Map[i] == 1) ans++;
    cout << ans << endl;
}
