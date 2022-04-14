#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <unordered_map>
using namespace std;
int main() {
    int n; cin >> n;
    bool ans = true;
    vector<string> s(n, ""), t(n, "");
    for (int i = 0; i < n; i++) cin >> s[i] >> t[i];
    unordered_map<string, bool> Map;
    for (int i = 0; i < n; i++) {
        string a = s[i], b = t[i];
        bool x = false, y = false;
        for (int j = 0; j < n; j++) {
            if (i == j) continue;
            if (a == s[j] && b == t[j]) x = true, y = true;
            else if (a == t[j] && b == s[j]) x = true, y = true;
            else if (a == s[j]) x = true;
            else if (a == t[j]) x = true;
            else if (b == s[j]) y = true;
            else if (b == t[j]) y = true;
        }
        if (x && y) ans = false;
    }
    cout << (ans ? "Yes" : "No") << endl;
}
