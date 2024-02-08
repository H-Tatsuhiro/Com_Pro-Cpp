#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n; cin >> n;
    vector<string> s(n, "");
    for (int i = 0; i < n; i++) cin >> s[i];
    vector<long long int> a(n, 0), b(n, 0);
    for (int i = 0; i < n; i++) for (int j = 0; j < n; j++) if (s[i][j] == 'o') a[i]++;
    for (int i = 0; i < n; i++) for (int j = 0; j < n; j++) if (s[j][i] == 'o') b[i]++;
    long long int ans = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] < 2) continue;
        for (int j = 0; j < n; j++) {
            if (b[j] < 2 || s[i][j] == 'x') continue;
            ans += (a[i] - 1) * (b[j] - 1);
        }
    }
    cout << ans << endl;
}


