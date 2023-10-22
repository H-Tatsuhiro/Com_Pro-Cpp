#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n; string t; cin >> n >> t;
    vector<string> s(n, "");
    for (int i = 0; i < n; i++) cin >> s[i];
    vector<int> ans;
    vector<pair<int, int>> p(n, make_pair(0, 0));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < t.size(); j++) {
            if (s[i].size() < j || s[i][j] != t[j]) break;
            p[i].first++;
        }
    }
    reverse(t.begin(), t.end());
    for (int i = 0; i < n; i++) {
        reverse(s[i].begin(), s[i].end());
        for (int j = 0; j < t.size(); j++) {
            if (s[i].size() < j || s[i][j] != t[j]) break;
            p[i].second++;
        }
    }
    for (int i = 0; i < n; i++) {
        int m = s[i].length(), c = p[i].first + p[i].second;
        bool f = false;
        if (p[i].first == m && m == t.size()) f = true;
        if (c >= m && m + 1 == t.size()) f = true;
        if (c >= m - 1 && m - 1 == t.size()) f = true;
        if (c == m - 1 && m == t.size()) f = true;
        if (f) ans.push_back(i + 1);
    }
    cout << ans.size() << endl;
    for (int i = 0; i < ans.size(); i++) cout << ans[i] << (i == n - 1 ? '\n' : ' ');
}


