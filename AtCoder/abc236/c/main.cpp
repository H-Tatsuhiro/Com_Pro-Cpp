#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <unordered_map>
using namespace std;
int main() {
    int n, m; cin >> n >> m;
    vector<string> s(n, "");
    for (int i = 0; i < n; i++) cin >> s[i];
    unordered_map<string, bool> Map;
    for (int i = 0; i < m; i++) {
        string t; cin >> t;
        Map[t] = true;
    }
    for (int i = 0; i < n; i++) cout << (Map[s[i]] ? "Yes" : "No") << endl;
}
