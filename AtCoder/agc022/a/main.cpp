#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <unordered_map>
using namespace std;
int main() {
    string s; cin >> s;
    string t = "abcdefghijklmnopqrstuvwxyz";
    unordered_map<char, bool> Map;
    for (int i = 0; i < s.length(); i++) Map[s[i]] = true;
    string canuse = "";
    for (int i = 0; i < t.length(); i++) if (!Map[t[i]]) canuse += t[i];
    if (t.length() > s.length()) cout << s << canuse[0] << endl;
    else {
        if (s == "zyxwvutsrqponmlkjihgfedcba") cout << -1 << endl;
        else {
            string ss = s;
            next_permutation(s.begin(), s.end());
            for (int i = 0; i < s.length(); i++) {
                if (s[i] != ss[i]) {
                    cout << s[i] << endl;
                    return 0;
                }
                else cout << s[i];
            }
        }
    }
}
