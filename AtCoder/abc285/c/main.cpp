#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    string s; cin >> s;
    long long int ans = 0, c = 1;
    for (int i = s.length() - 1; i >= 0; i--) ans += (s[i] - 'A' + 1) * c, c *= 26;
    cout << ans << endl;
}


