#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n; string s; cin >> n >> s;
    int ans = 0;
    for (int i = 0; i < n; i++) {
        string str; cin >> str;
        bool tf = false;
        for (int j = 0; j < 35; j++) {
            string t = ""; int cnt = 0;
            for (int l = 0; l < str.length(); l++) {
                int p = l;
                for (int k = 0; k < s.length(); k++) {
                    t += str[p], p += j + 1, cnt++;
                    if (p >= str.length() || cnt == s.length()) break;
                }
                if (t == s) {
                    tf = true;
                    break;
                }
                else t = "";
            }
           if (tf) break;
        }
        if (tf) ans++;
    }
    cout << ans << endl;
}
