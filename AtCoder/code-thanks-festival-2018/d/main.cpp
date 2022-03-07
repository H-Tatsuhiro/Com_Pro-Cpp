#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    string s; cin >> s;
    int ans = 0;
    char now = '{';
    for (int i = 0; i < s.length(); i++) if (s[i] < now || s[i] == now) ans++, now = s[i];
    cout << ans << endl;
}
