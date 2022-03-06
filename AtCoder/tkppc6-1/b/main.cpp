#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <unordered_map>
using namespace std;
int main() {
    int n, m, ans = 0, tmp = 0; cin >> n >> m;
    unordered_map<int, int> Map;
    for (int i = 0; i < n; i++) {
        int a; cin >> a, Map[a]++;
    }
    for (int i = 0; i <= 200000; i++) if (Map[i]) ans++, tmp += Map[i] - 1;
    ans += (m > tmp ? tmp : m);
    cout << ans << endl;
}
