#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;
int main() {
    string s = "", w = "", t;
    while(cin >> t) {
        if ("0" <= t && t <= "50") {
            swap(s, w), s.erase(s.end() - 1);
            continue;
        }
        w += t + " ";
    }
    if (w == "") {
        cout << s << endl;
        return 0;
    }
    w.erase(w.end() - 1);
    string tmp = "";
    vector<string> words, ng;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == ' ') words.push_back(tmp), tmp = "";
        else tmp += s[i];
    }
    words.push_back(tmp), tmp = "";
    for (int i = 0; i < w.length(); i++) {
        if (w[i] == ' ') ng.push_back(tmp), tmp = "";
        else tmp += w[i];
    }
    ng.push_back(tmp);
    for (int i = 0; i < ng.size(); i++) {
        for (int j = 0; j < words.size(); j++) {
            if (ng[i].length() != words[j].length()) continue;
            bool f = true;
            for (int k = 0; k < ng[i].length(); k++) {
                if (ng[i][k] == '*') continue;
                else if (ng[i][k] != words[j][k]) f = false;
            }
            if (f) for (int k = 0; k < ng[i].length(); k++) words[j][k] = '*';
        }
    }
    for (int i = 0; i < words.size(); i++) cout << words[i] << (i == words.size() - 1 ? '\n' : ' ');
}
