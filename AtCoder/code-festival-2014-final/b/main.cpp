#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    string s; cin >> s;
    long long int ans = 0;
    for (int i = 0; i < s.length(); i++) {
        if (i % 2 == 0) ans += (s[i] - '1' + 1);
        else ans -= (s[i] - '1' + 1);
    }
    cout << ans << endl;
}
