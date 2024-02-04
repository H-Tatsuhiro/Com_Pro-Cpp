#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    string s; cin >> s;
    vector<string> v;
    int ans = 0;
    for (int i = 0; i < s.length(); i++) {
        for (int j = 0; j < s.length() - i + 1; j++) {
            string t = s.substr(i, j);
            v.push_back(t);
        }
    }
    for (int i = 0; i < v.size(); i++) {
        string str = v[i];
        int n = str.length();
        bool f = true;
        for (int l = 0; l < n; l++) if (str[l] != str[n - l - 1]) f = false;
        if (f) ans = max(n, ans);
    }
    cout << ans << endl;
}


