#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    string x; int n; cin >> x >> n;
    vector<string> s(n, "");
    for (int i = 0; i < n; i++) cin >> s[i];
    string t = "abcdefghijklmnopqrstuvwxyz";
    unordered_map<char, char> Map, M;
    for (int i = 0; i < t.length(); i++) Map[x[i]] = t[i], M[t[i]] = x[i];
    for (int i = 0; i < n; i++) for (int j = 0; j < s[i].length(); j++) s[i][j] = Map[s[i][j]];
    sort(s.begin(), s.end());
    for (int i = 0; i < n; i++) for (int j = 0; j < s[i].length(); j++) s[i][j] = M[s[i][j]];
    for (int i = 0; i < n; i++) cout << s[i] << endl;
}
