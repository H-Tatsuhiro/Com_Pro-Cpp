#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    string s; cin >> s;
    bool t = false;
    for (int i = 0; i < s.length() / 2; i++) {
        int j = s.length() - i - 1;
        if (s[i] == s[j] || s[i] == '*' || s[j] == '*') t = true;
        else {
            t = false;
            break;
        }
    }
    if (t) cout << "YES" << endl;
    else cout << "NO" << endl;
}
