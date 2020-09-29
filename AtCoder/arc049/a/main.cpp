#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    string s; cin >> s;
    s.insert(0, ".");
    s.insert(s.end(), '.');
    int a, b, c, d; cin >> a >> b >> c >> d;
    for (int i = 0; i < s.length() - 1; i++) {
        if (i == a || i == b || i == c || i == d) {
            if (s[i] == '.') cout << '"';
            else cout << s[i] << '"';
        }
        else {
            if (s[i] != '.') cout << s[i];
        }
    }
    cout << endl;
}
