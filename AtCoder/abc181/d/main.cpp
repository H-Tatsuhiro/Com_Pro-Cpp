#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    string s; cin >> s;
    if (s.length() == 1 && s[0] == '8') {
        cout << "Yes" << endl;
        return 0;
    }
    else if (s.length() == 2) {
        if (stoi(s) % 8 == 0) {
            cout << "Yes" << endl;
            return 0;
        }
        swap(s[0], s[1]);
        if (stoi(s) % 8 == 0) {
            cout << "Yes" << endl;
            return 0;
        }
    }
    vector<int> cnt(10, 0);
    for (int i = 0; i < s.length(); i++) cnt[s[i] - '0']++;
    for (int i = 112; i < 1000; i += 8) {
        vector<int> tmp = cnt;
        string t = to_string(i);
        for (int j = 0; j < t.length(); j++) tmp[t[j] - '0']--;
        bool f = true;
        for (int j = 0; j < 10; j++) if (tmp[j] < 0) f = false;
        if (f) {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}
