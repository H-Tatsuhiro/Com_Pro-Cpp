#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    string s; cin >> s;
    int ans = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] != '0') ans++;
        else {
            if (i < s.length() - 1 && s[i + 1] == '0') ans++, i++;
            else ans++;
        }
    }
    cout << ans << endl;
}


