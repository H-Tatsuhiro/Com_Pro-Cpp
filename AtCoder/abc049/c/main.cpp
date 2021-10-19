#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    string s; cin >> s;
    bool t = true;
    string r = s;
    reverse(r.begin(), r.end());
    int i = 0;
    while(i < s.length()) {
        string a, b, c;
        if (i + 4 < s.length()) a = r.substr(i, 5);
        if (i + 5 < s.length()) b = r.substr(i, 6);
        if (i + 6 < s.length()) c = r.substr(i, 7);
        if (a == "maerd" || a == "esare") i += 5;
        else if (b == "resare") i += 6;
        else if (c == "remaerd") i += 7;
        else {
            t = false;
            break;
        }
    }
    if (t) cout << "YES" << endl;
    else cout << "NO" << endl;
}
