//
// Created by privath(Tatsuhiro Hashimoto) on 2022/04/02.
//
#include <iostream>
#include <vector>
using namespace std;
int main() {
    int t; cin >> t;
    for (int Case = 1; Case <= t; Case++) {
        vector<int> ans(4, 0), m(4, 1000001);
        int printer, s = 0;
        for (int i = 0; i < 3; i++) for (int j = 0; j < 4; j++) cin >> printer, m[j] = min(m[j], printer);
        cout << "Case #" << Case << ": ";
        bool f = false;
        for (int i = 0; i < 4 && !f; i++) {
            if (m[i] == 0) f = true;
            else ans[i] += m[i], s += m[i];
        }
        s -= 1000000;
        if (s < 0) f = true;
        for (int i = 0; i < 4; i++) {
            if (s > 0) {
                if (ans[i] - s > 0) ans[i] -= s, s = 0;
                else s -= ans[i] - 1, ans[i] = 1;
            }
        }
        if (s != 0) f = true;
        if (f) cout << "IMPOSSIBLE" << endl;
        else for (int i = 0; i < 4; i++) cout << ans[i] << (i == 3 ? '\n' : ' ');
    }
}
// Passed all test.