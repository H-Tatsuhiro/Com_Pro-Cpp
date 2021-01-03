#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    vector<int> x(3, 0);
    cin >> x[0] >> x[1] >> x[2];
    if (x[0] == x[1] && x[1] == x[2]) {
        cout << 0 << endl;
        return 0;
    }
    sort(x.begin(), x.end());
    int ans = 0, o = 0;
    for (int i = 0; i < 3; i++) if (x[i] % 2 == 0) o++;
    if (o == 3 || o == 0) ans--;
    else if (o > 3 - o) {
        for (int i = 0; i < 3; i++) if (x[i] % 2 == 0 && o > 0) x[i]++, o--;
    }
    else {
        o++;
        for (int i = 0; i < 3; i++) if (x[i] % 2 != 0 && o > 0) x[i]++, o--;
    }
    ans++;
    sort(x.begin(), x.end());
    for (int i = 0; i < 2; i++) ans += abs(x[2] - x[i]) / 2;
    cout << ans << endl;
    return 0;
}
