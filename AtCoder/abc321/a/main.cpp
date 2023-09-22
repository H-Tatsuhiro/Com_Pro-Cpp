#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    string s; cin >> s;
    bool t = true;
    for (int i = 0; i < s.length() - 1; i++) {
        if (s[i] - '0' <= s[i + 1] - '0') t = false;
    }
    cout << (t ? "Yes" : "No") << endl;
}


