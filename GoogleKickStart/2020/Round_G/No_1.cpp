//
// Created by Tatsuhiro Hashimoto on 2020/10/18.
//
#include <iostream>
#include <string>
using namespace std;
int main() {
    int n; cin >> n;
    for (int i = 0; i < n; i++) {
        string s; cin >> s;
        int ans = 0, cnt = 0;
        int m = s.length();
        for (int j = 0; j < m; j++) {
            string kick = s.substr(j, 4);
            if (kick == "KICK") cnt++;
            string start = s.substr(j, 5);
            if (start == "START") ans += cnt;
        }
        cout << "Case #" << i + 1 << ": " << ans << endl;
    }
}
