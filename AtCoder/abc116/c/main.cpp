#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n; cin >> n;
    vector<int> h(n, 0);
    for (int i = 0; i < n; i++) cin >> h[i];
    int ans = 0;
    h.push_back(0);
    int i = 0;
    while(i < n) {
        int tmp = h[i];
        for (int j = i + 1; ; j++) {
            if (h[j] <= 0) break;
            tmp = min(tmp, h[j]);
        }
        for (int j = i; ; j++) {
            if (h[j] <= 0) break;
            h[j] -= tmp;
        }
        ans += tmp;
        if (h[i] == 0) i++;
    }
    cout << ans << endl;
}
