#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <unordered_map>
using namespace std;
int main() {
    int n; cin >> n;
    vector<int> a(n, 0), b;
    unordered_map<int, int> Map;
    unordered_map<int, bool> Check;
    for (int i = 0; i < n; i++) {
        cin >> a[i]; Map[a[i]]++;
    }
    for (int i = 0; i < n; i++) {
        if (!Check[a[i]]) {
            Check[a[i]] = true;
            b.push_back(a[i]);
        }
    }
    int ans = 0;
    for (int i = 0; i < b.size(); i++) if (Map[b[i]] % 2 != 0) ans++;
    cout << ans << endl;
}
