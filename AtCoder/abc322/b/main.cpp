#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n, m; cin >> n >> m;
    string s, t; cin >> s >> t;
    bool x = false, y = false;
    if (t.substr(0, n) == s) x = true;
    reverse(t.begin(), t.end());
    reverse(s.begin(), s.end());
    if (t.substr(0, n) == s) y = true;
    if (x && y) cout << 0 << endl;
    else if (x) cout << 1 << endl;
    else if (y) cout << 2 << endl;
    else cout << 3 << endl;
}


