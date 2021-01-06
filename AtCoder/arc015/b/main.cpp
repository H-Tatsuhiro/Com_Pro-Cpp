#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n; cin >> n;
    vector<int> ans(6, 0);
    for (int i = 0; i < n; i++) {
        long double a, b; cin >> a >> b;
        if (a >= 35.0) ans[0]++;
        if (a >= 30.0 && a < 35.0) ans[1]++;
        if (a >= 25.0 && a < 30.0) ans[2]++;
        if (b >= 25.0) ans[3]++;
        if (b < 0.0 && a >= 0.0) ans[4]++;
        if (a < 0) ans[5]++;
    }
    for (int i = 0; i < 6; i++) {
        if (i == 5) cout << ans[i] << endl;
        else cout << ans[i] << " ";
    }
}
