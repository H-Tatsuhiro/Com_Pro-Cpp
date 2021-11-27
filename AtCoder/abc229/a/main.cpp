#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    string s, t; cin >> s >> t;
    bool f = true;
    if (t[1] == '#' && s[0] == '#' && s[1] == '.' && t[0] == '.') f = false;
    if (t[0] == '#' && s[1] == '#' && s[0] == '.' && t[1] == '.') f = false;
    cout << (f ? "Yes" : "No") << endl;
}
