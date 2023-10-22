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
    for (int i = 0; i < n; i++) {
        string p = s[i];
        bool f = false;
        if (p == t) {
            ans.push_back(i + 1);
            continue;
        }
        for (int j = 0; j < p.length() + 1; j++) {
            if (j != p.length()) {
                string tmp = p;
                tmp.erase(tmp.begin() + j);
                if (tmp == t) {
                    f = true;
                    break;
                }
            }
            for (char c = 'a'; c <= 'z'; c++) {
                if (j != p.length()) {
                    string tmp = p;
                    tmp[j] = c;
                    if (tmp == t) {
                        f = true;
                        break;
                    }
                }
                string tmp = p;
                string q{c};
                tmp.insert(j, q);
                if (tmp == t) {
                    f = true;
                    break;
                }
            }
            if (f) break;
        }
        if (f) ans.push_back(i + 1);
    }
    cout << ans.size() << endl;
    for (int i = 0; i < ans.size(); i++) cout << ans[i] << (i == n - 1 ? '\n' : ' ');
}


