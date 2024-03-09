#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    string s; cin >> s;
    string ans = "";
    bool t = true;
    for (int i = 0; i < s.length(); i++) {
        if (t) {
            if (s[i] == '|') t = false;
            else ans += s[i];
        }
        else {
            if (s[i] == '|') t = true;
        }
    }
    cout << ans << endl;
}


