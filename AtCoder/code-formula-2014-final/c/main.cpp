#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <unordered_map>
using namespace std;
int main() {
    string S;
    vector<string> s;
    unordered_map<string, bool> Map;
    function<void(string)> addMap = [&](string q) -> void {
        s.push_back(q);
        Map[q] = true;
    };
    while (cin >> S) {
        string t = "";
        for (int i = S.length() - 1; i >= 0; i--) {
            if (S[i] != '@') t += S[i];
            else if (t.length() > 0) {
                reverse(t.begin(), t.end());
                addMap(t);
                t = "";
            }
        }
    }
    sort(s.begin(), s.end());
    for (int i = 0; i < s.size(); i++) {
        if (Map[s[i]]) {
            cout << s[i] << endl;
            Map[s[i]] = false;
        }
    }
}
