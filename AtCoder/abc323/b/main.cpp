#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n; cin >> n;
    vector<pair<int, int>> a(n, make_pair(0, 0));
    for (int i = 0; i < n; i++) a[i].second = -1 * (i + 1);
    vector<string> s(n, "");
    for (int i = 0; i < n; i++) cin >> s[i];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j) continue;
            if (s[i][j] == 'o') a[i].first++;
            else a[j].first++;
        }
    }
    sort(a.begin(), a.end());
    reverse(a.begin(), a.end());
    for (int i = 0; i < n; i++) cout << -1 * a[i].second << (i == n - 1 ? '\n' : ' ');
}


