#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    string s; cin >> s;
    bool ans = true;
    int x = 0, y = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'a') x++;
        else break;
    }
    for (int i = s.length() - 1; i >= 0; i--) {
        if (s[i] == 'a') y++;
        else break;
    }
    if (x > y) ans = false;
    for (int i = x;  i < s.length() - y; i++) if (s[i] != s[x + s.length() - y - i - 1]) ans = false;
    cout << (ans ? "Yes" : "No") << endl;
}
