#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n; string s; cin >> n >> s;
    int ans = 0, cnt = 0;
    char c = s[0];
    vector<int> v(28, 0);
    for (int i = 0; i < n; i++) {
        if (c != s[i]) {
            if (v[c - 'a'] < cnt) ans += cnt - v[c - 'a'], v[c - 'a'] = cnt;
            c = s[i], cnt = 1;
        }
        else cnt++;
    }
    if (v[c - 'a'] < cnt) ans += cnt - v[c - 'a'];
    cout << ans << endl;
}


