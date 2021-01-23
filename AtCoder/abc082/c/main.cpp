#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <unordered_map>
using namespace std;
int main() {
    int n; cin >> n;
    vector<int> a(n, 0);
    unordered_map<int, int> Map;
    for (int i = 0; i < n; i++) {
        cin >> a[i]; Map[a[i]]++;
    }
    vector<int> b;
    unordered_map<int, bool> Check;
    for (int i = 0; i < n; i++) {
        if (Check[a[i]]) continue;
        else {
            b.push_back(a[i]);
            Check[a[i]] = true;
        }
    }
    int ans = 0;
    for (int i = 0; i < b.size(); i++) {
        if (Map[b[i]] > b[i]) ans += Map[b[i]] - b[i];
        else if (Map[b[i]] < b[i]) ans += Map[b[i]];
    }
    cout << ans << endl;
}
