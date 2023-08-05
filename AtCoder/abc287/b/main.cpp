#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <unordered_map>
using namespace std;
int main() {
    int n, m; cin >> n >> m;
    vector<string> s(n, "");
    unordered_map<string, bool> Map;
    string t = "";
    int ans = 0;
    for (int i = 0; i < n; i++) cin >> s[i];
    for (int i = 0; i < m; i++) cin >> t, Map[t] = true;
    for (int i = 0; i < n; i++) if (Map[s[i].substr(3, 3)]) ans++;
    cout << ans << endl;
}


