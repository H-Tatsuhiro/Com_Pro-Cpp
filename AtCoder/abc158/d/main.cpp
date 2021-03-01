#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <cstdio>
#include <string>
using namespace std;
int main() {
    string s; cin >> s;
    string a = "", b = "";
    int q; cin >> q;
    bool rev = false;
    for (int i = 0; i < q; i++) {
        int t; cin >> t;
        if (t == 1) rev = !rev;
        else {
            int f; char c; cin >> f >> c;
            if (f == 1) {
                if (!rev) a += c;
                else b += c;
            }
            else {
                if (!rev) b += c;
                else a += c;
            }
        }
    }
    if (!rev) {
        reverse(a.begin(), a.end());
        cout << a << s << b << endl;
    }
    else {
        reverse(s.begin(), s.end()), reverse(b.begin(), b.end());
        cout << b << s << a << endl;
    }
}
