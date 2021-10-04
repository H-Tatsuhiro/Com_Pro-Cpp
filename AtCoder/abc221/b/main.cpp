#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    string s, t; cin >> s >> t;
    if (s == t) {
        cout << "Yes" << endl;
        return 0;
    }
    for (int i = 0; i < s.length() - 1; i++) {
        swap(s[i], s[i + 1]);
        if (s == t) {
            cout << "Yes" << endl;
            return 0;
        }
        swap(s[i], s[i + 1]);
    }
    cout << "No" << endl;
    return 0;
}
