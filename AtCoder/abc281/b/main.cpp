#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    string s; cin >> s;
    int n = s.length();
    if (n != 8) {
        cout << "No" << endl;
        return 0;
    }
    if (!('A' <= s[0] && s[0] <= 'Z')) {
        cout << "No" << endl;
        return 0;
    }
    if (!('A' <= s[n - 1] && s[n - 1] <= 'Z')) {
        cout << "No" << endl;
        return 0;
    }
    bool t = false;
    for (int i = 1; i <= n - 2; i++) {
        if ('A' <= s[i] && s[i] <= 'Z') t = true;
    }
    if (t) {
        cout << "No" << endl;
        return 0;
    }
    int m = stoi(s.substr(1, 6));
    if (100000 <= m && m <= 999999) {
        cout << "Yes" << endl;
    }
    else cout << "No" << endl;
}


