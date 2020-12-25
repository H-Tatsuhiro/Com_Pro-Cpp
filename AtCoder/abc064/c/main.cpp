#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <set>
using namespace std;
int main() {
    int n, cnt = 0; cin >> n;
    set<int> s;
    for (int i = 0; i < n; i++) {
        int a; cin >> a;
        if (1 <= a && a < 400) s.insert(1);
        if (400 <= a && a < 800) s.insert(2);
        if (800 <= a && a < 1200) s.insert(3);
        if (1200 <= a && a < 1600) s.insert(4);
        if (1600 <= a && a < 2000) s.insert(5);
        if (2000 <= a && a < 2400) s.insert(6);
        if (2400 <= a && a < 2800) s.insert(7);
        if (2800 <= a && a < 3200) s.insert(8);
        if (3200 <= a) cnt++;
    }
    int ans = s.size();
    if (ans == 0) cout << 1 << " " << cnt << endl;
    else cout << ans << " " << ans + cnt << endl;
}
