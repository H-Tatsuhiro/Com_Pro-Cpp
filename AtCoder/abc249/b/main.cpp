#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <unordered_map>
using namespace std;
int main() {
    string s; cin >> s;
    unordered_map<char, bool> Map;
    bool a = false, b = false;
    for (int i = 0; i < s.length(); i++) {
        if ('a' <= s[i] && s[i] <= 'z') a = true;
        if ('A' <= s[i] && s[i] <= 'Z') b = true;
        if (Map[s[i]]) {
            cout << "No" << endl;
            return 0;
        }
        else Map[s[i]] = true;
    }
    if (a && b) cout << "Yes" << endl;
    else cout << "No" << endl;
}
