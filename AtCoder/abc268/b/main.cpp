#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    string s, t; cin >> s >> t;
    if (s.length() <= t.length()) {
        string u = t.substr(0, s.length());
        if (s == u) {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
}
