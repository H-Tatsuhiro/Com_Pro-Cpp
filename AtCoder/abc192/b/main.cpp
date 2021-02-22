#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    string s; cin >> s;
    bool t = true;
    for (int i = 0; i < s.length(); i++) {
        if (i % 2 == 0) {
            if (!('a' <= s[i] && s[i] <= 'z')) {
                t = false;
                break;
            }
        }
        else {
            if (!('A' <= s[i] && s[i] <= 'Z')) {
                t = false;
                break;
            }
        }
    }
    if (t) cout << "Yes" << endl;
    else cout << "No" << endl;
}
