#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    string s; cin >> s;
    string t = "";
    for (int i = 0; i < 10e5; i++) t += "oxx";
    bool tt = false;
    for (int i = 0; i < t.length() - s.size(); i++) if (s == t.substr(0 + i, s.length())) tt = true;
    cout << (tt ? "Yes" : "No") << endl;
}
