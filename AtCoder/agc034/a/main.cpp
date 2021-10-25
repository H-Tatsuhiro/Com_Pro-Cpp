#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n, a, b, c, d; string s; cin >> n >> a >> b >> c >> d >> s;
    s = '#' + s + '#';
    bool ans = true;
    for (int i = a; i + 1 <= c; i++) if (s[i] == '#' && s[i + 1] == '#') ans = false;
    for (int i = b; i + 1 <= d; i++) if (s[i] == '#' && s[i + 1] == '#') ans = false;
    if (c > d) {
        bool t = false;
        for (int i = b; i <= d; i++) if (s[i - 1] == '.' && s[i] == '.' && s[i + 1] == '.') t = true;
        if (!t) ans = false;
    }
    cout << (ans ? "Yes" : "No") << endl;
}
