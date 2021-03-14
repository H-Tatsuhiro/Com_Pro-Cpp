#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    char x; string s; cin >> x >> s;
    string ans = "";
    for (int i = 0; i < s.length(); i++) if (s[i] != x) ans += s[i];
    cout << ans << endl;
}
