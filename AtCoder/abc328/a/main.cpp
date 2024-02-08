#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n, x; cin >> n >> x;
    vector<int> s(n, 0);
    for (int i = 0; i < n; i++) cin >> s[i];
    int ans = 0;
    for (int i = 0; i < n; i++) if (s[i] <= x) ans += s[i];
    cout << ans << endl;
}


