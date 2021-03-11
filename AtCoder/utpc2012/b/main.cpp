#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <unordered_map>
using namespace std;
int main() {
    string s, ans = ""; cin >> s;
    vector<char> tmp = {'A','B','C','D','E','F','G','H'};
    unordered_map<char, bool> Map;
    for (int i = s.length() - 1; i >= 0; i--) if (!Map[s[i]]) ans += s[i], Map[s[i]] = true;
    for (auto c : tmp) if (!Map[c]) ans += c;
    reverse(ans.begin(), ans.end());
    cout << ans << endl;
}
