#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    string s; cin >> s;
    int a = 0, b = 0;
    string t = ""; bool f = false;
    for (int i = 0; i < s.length(); i++) {
        if (f) f = false;
        int j = 1;
        while(i + j <= s.length()) {
            if (s.substr(i, j) != t) {
                a++, t = s.substr(i, j);
                break;
            }
            else f = true, j++;
        }
        if (f) i += j, i--;
    }
    reverse(s.begin(), s.end());
    t = ""; f = false;
    for (int i = 0; i < s.length(); i++) {
        if (f) f = false;
        int j = 1;
        while(i + j <= s.length() - 1) {
            if (s.substr(i, j) != t) {
                b++, t = s.substr(i, j);
                break;
            }
            else f = true, j++;
        }
        if (f) i += j, i--;
    }
    cout << max(a, b) << endl;
}
