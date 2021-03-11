#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    string s, t; cin >> s >> t;
    int p = 0;
    for (int i = 0; i < s.length(); i++) {
        while(s[i] != t[p]) {
            p++;
            if (p >= t.length()) {
                cout << "No" << endl;
                return 0;
            }
        }
        p++;
    }
    int x = 0, y = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[0] == s[i]) x++;
        else break;
    }
    for (int i = 0; i < t.length(); i++) {
        if (s[0] == t[i]) y++;
        else break;
    }
    if (y == 0 || x < y) cout << "No" << endl;
    else cout << "Yes" << endl;
}