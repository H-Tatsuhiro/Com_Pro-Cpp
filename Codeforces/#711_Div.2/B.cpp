//
// Created by Tatsuhiro Hashimoto on 2021/03/29.
//
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int main() {
    int Cases; cin >> Cases;
    for (int Case = 0; Case < Cases; Case++) {
        int n, w; cin >> n >> w;
        vector<int> a(20, 0);
        for (int i = 0; i < n; i++) {
            int c; cin >> c;
            a[log2(c)]++;
        }
        int ans = 1, cnt = w;
        for (int i = 0; i < n; i++) {
            int m = -1;
            for (int j = 19; j >= 0; j--) {
                if (a[j] && (1 << j) <= cnt) {
                    m = j;
                    break;
                }
            }
            if (m == -1) {
                cnt = w, ans++;
                for (int j = 19; j >= 0; j--) {
                    if (a[j] && (1 << j) <= cnt) {
                        m = j;
                        break;
                    }
                }
            }
            a[m] -= 1, cnt -= 1 << m;
        }
        cout << ans << endl;
    }
}
