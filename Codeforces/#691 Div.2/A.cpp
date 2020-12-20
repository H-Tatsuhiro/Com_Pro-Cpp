//
// Created by Tatsuhiro Hashimoto on 2020/12/19.
//

#include <bits/stdc++.h>
using namespace std;
#define prepare cin.tie(0); cout.tie(0); ios::sync_with_stdio(false);
signed main() {
    prepare
    long long int t; cin >> t;
    for (long long int j = 0; j < t; j++) {
        long long int n; string a, b; cin >> n >> a >> b;
        long long int cnt_r = 0, cnt_b = 0;
        for (long long int i = 0; i < n; i++) {
             if (a[i] > b[i]) cnt_r++;
             else if (a[i] < b[i]) cnt_b++;
        }
        if (cnt_r > cnt_b) cout << "RED" << endl;
        else if (cnt_r < cnt_b) cout << "BLUE" << endl;
        else cout << "EQUAL" << endl;
    }
}
