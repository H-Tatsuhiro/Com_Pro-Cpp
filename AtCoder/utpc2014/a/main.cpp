#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    string s; getline(cin, s);
    vector<string> t;
    s += ' ';
    string str = "";
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == ' ') {
            t.push_back(str);
            str = "";
        }
        else str += s[i];
    }
    bool c = true;
    int ts = t.size();
    while(c) {
        c = false;
        for (int i = 0; i < ts - 2; i++) {
            if (i + 2 <= ts - 1) {
                if (t[i] == "not" && t[i + 1] == "not" && t[i + 2] != "not") {
                    t.erase(t.begin() + i, t.begin() + i + 2);
                    ts -= 2;
                    c = true; break;
                }
            }
        }
    }
    for (int j = 0; j < t.size(); j++) {
        if (j == t.size() - 1) cout << t[j] << endl;
        else cout << t[j] << " ";
    }
}
