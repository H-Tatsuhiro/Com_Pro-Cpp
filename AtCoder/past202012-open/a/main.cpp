#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    string s; cin >> s;
    bool t = false, f = false;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'o' && s[i + 1] == s[i] && s[i + 1] == s[i + 2]) t = true;
        else if (s[i] == 'x' && s[i + 1] == s[i] && s[i + 1] == s[i + 2]) f = true;
    }
    if (t) cout << 'o' << endl;
    else if (f) cout << 'x' << endl;
    else cout << "draw" << endl;
}
