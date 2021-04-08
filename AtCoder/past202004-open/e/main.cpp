#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n; cin >> n;
    vector<int> a(n, 0), ans(n, 1);
    for (int i = 0; i < n; i++) cin >> a[i];

    for (int i = 0; i < n; i++) {
        int x = a[i], cnt = 0;
        while(true) {
            cnt++;
            if (i + 1 == x) {
                ans[i] = cnt;
                break;
            }
            else x = a[x - 1];
        }
    }

    for (int i = 0; i < n; i++) {
        if (i == n - 1) cout << ans[i] << endl;
        else cout << ans[i] << " ";
    }
}
