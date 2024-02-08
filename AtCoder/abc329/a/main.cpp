#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    string s; cin >> s;
    for (int i = 0; i < s.length(); i++) {
        cout << s[i];
        if (i == s.length() - 1) break;
        cout << ' ';
    }
    cout << endl;
}


