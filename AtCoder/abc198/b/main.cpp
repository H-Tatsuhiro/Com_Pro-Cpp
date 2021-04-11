#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    string n; cin >> n;
    bool t = true;
    int a = 0;
    for (int i = n.length() - 1; i >= 0; i--) {
        if (n[i] == '0') a++;
        else break;
    }
    string s = n.substr(0, n.length() - a);
    for (int i = 0; i < s.length() / 2; i++) {
        if (s[i] != s[s.length() - 1 - i]) t = false;
    }
    if (t) cout << "Yes" << endl;
    else cout << "No" << endl;
}
