#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    string s; cin >> s;
    int n = s.length();
    vector<int> a(n, 0), b(n, 0);
    long long int ans = 0;
    for (int i = 0; i < n; i++) a[i] = (s[i] == 'U' ? 1 : 2), b[i] = (s[i] == 'D' ? 1 : 2);
    for (int i = 1; i <= n; i++) ans += (n - i) * a[i - 1], ans += (i - 1) * b[i - 1];
    cout << ans << endl;
}
