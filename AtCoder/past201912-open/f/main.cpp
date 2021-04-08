#include <iostream>
#include <cmath>
#include <algorithm>
#include <unordered_map>
#include <vector>
#include <string>
using namespace std;
int main() {
    string s, t = "";; cin >> s;
    vector<pair<string, int>> v;
    unordered_map<int, string> Tmp;
    int p = 1;
    for (int i = 0; i < s.length(); i++) {
        if (t == "" && 'A' <= s[i] && s[i] <= 'Z') t += s[i];
        else if ('A' <= s[i] && s[i] <= 'Z') {
            t += s[i], Tmp[p] = t;
            transform(t.begin(), t.end(), t.begin(), ::toupper);
            v.emplace_back(t, p), t = "", p++;
        }
        else t += s[i];
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < v.size(); i++) {
        if (i == v.size() - 1) cout << Tmp[v[i].second] << endl;
        else cout << Tmp[v[i].second];
    }
}
