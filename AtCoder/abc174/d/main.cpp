#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n; cin >> n;
    string s; cin >> s;
    int a = 0, b = 0;
    for (int i = 0; i < n; i++) if (s[i] == 'R') a++;
    int ans = max(a, b);
    for (int i = 0; i < n; i++) {
        if (s[i] == 'W') b++;
        else a--;
        ans = min(ans, max(a, b));
    }
    cout << ans << endl;
}
