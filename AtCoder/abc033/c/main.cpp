#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    string s; cin >> s;
    s += '+';
    long long int ans = 0;
    bool t = false;
    for (int i = 0; i < s.length(); i++) {
        if (i % 2 != 0 && s[i] == '+') {
            if (!t) ans++;
            else t = false;
        }
        else if (s[i] == '0') t = true;
    }
    cout << ans << endl;
}
