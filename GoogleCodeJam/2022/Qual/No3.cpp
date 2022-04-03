//
// Created by privath(Tatsuhiro Hashimoto) on 2022/04/02.
//
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    int t; cin >> t;
    for (int Case = 1; Case <= t; Case++) {
        int n; cin >> n;
        vector<int> s(n, 0);
        for (int i = 0; i < n; i++) cin >> s[i];
        sort(s.begin(), s.end());
        int ans = 1;
        for (int i = 0; i < n; i++) if (ans <= s[i]) ans++;
        cout << "Case #" << Case << ": "  << ans - 1<< endl;
    }
}
// Passed all test.