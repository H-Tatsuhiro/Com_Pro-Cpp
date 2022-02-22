#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n; string s; cin >> n >> s;
    long long int ans = 0, cnt = 0;
    char prev = s[0];
    for (int i = 0; i < n; i++) {
        if (prev == s[i]) cnt++;
        else ans += (cnt * (cnt - 1)) / 2, cnt = 1, prev = s[i];
    }
    if (cnt >= 2) ans += (cnt * (cnt - 1)) / 2;
    cout << ans << endl;
}
