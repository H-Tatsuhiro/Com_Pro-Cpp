#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    string s, t;
    cin >> s >> t;
    bool ans = false;
    for (int i = 1; i <= 26; i++) {
        string f = "";
        for (int j = 0; j < s.length(); j++) {
            int a = s[j] - 'a';
            a += i;
            a %= 26;
            f.push_back(char(a + 'a'));
        }
        if (f == t) ans = true;
    }
    if (ans) cout << "Yes" << endl;
    else cout << "No" << endl;
}