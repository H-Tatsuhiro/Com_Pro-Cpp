#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    string s; cin >> s;
    string t = "ZONe";
    int ans = 0;
    for (int i = 0; i < s.length() - 3; i++) {
        string ss = s.substr(i, 4);
        if (ss == t) ans++;
    }
    cout << ans << endl;
}
