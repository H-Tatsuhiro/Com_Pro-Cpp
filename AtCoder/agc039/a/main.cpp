#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    string s; int k; cin >> s >> k;
    long long int ans = 0, cnt = 0;
    bool t = true;
    for (int i = 0; i < s.length() - 1; i++) {
        if (s[i] != s[i + 1]) {
            t = false;
            break;
        }
    }
    if (t) ans = (s.length() * k) / 2;
    else {
        if (s[0] == s[s.length() - 1]) {
            int a = 1, b = 1;
            for (int i = 1; i < s.length(); i++) {
                if (s[i - 1] == s[i]) a++;
                else break;
            }
            for (int i = s.length() - 2; i >= 0; i--) {
                if (s[i] == s[i + 1]) b++;
                else break;
            }
            for (int i = 0; i < s.length() - 1; i++) if (s[i] == s[i + 1]) cnt++, s[i + 1] = '.';
            ans += cnt * k - ((a / 2 + b / 2 - (a + b) / 2) * (k - 1));
        }
        else {
            for (int i = 0; i < s.length() - 1; i++) if (s[i] == s[i + 1]) cnt++, s[i + 1] = '.';
            ans += cnt * k;
        }
    }
    cout << ans << endl;
}
