#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    string s;
    int ans = 0;
    for (int i = 0; i < 4; i++) cin >> s, ans += (s[0] == '1' && s[1] == '1' && s[2] == '1' && s[3] == '1' ? 1 : 0);
    cout << ans << endl;
}
