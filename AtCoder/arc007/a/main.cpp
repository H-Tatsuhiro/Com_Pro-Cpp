#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    char c; string s; cin >> c >> s;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] != c) cout << s[i];
    }
    cout << endl;
}
