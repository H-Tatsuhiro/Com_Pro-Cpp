#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    string s; cin >> s;
    string ans = "";
    for (int i = 0; i < s.length(); i++) {
        if (i == s.length() - 1) ans = s;
        if (s[i] == '.') {
            ans = s.substr(0, i);
            break;
        }
    }
    cout << ans << endl;
}
