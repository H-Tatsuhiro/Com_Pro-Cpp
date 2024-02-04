#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    string s; cin >> s;
    string t = "";
    for (int i = s.length() - 1; i >= 0; i--) {
        if (s[i] == '.') break;
        else t += s[i];
    }
    reverse(t.begin(), t.end());
    cout << t << endl;
}


