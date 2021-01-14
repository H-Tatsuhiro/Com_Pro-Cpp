#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <unordered_map>
using namespace std;
int main() {
    int n; cin >> n;
    unordered_map<string, bool> Map;
    char c = '-';
    for (int i = 0; i < n; i++) {
        string s; cin >> s;
        if (c == '-') c = s[0];
        if (i % 2 == 0) {
            if (s[0] != c) {
                cout << "LOSE" << endl;
                return 0;
            }
            else c = s[s.length() - 1];
            if (Map[s]) {
                cout << "LOSE" << endl;
                return 0;
            }
            else Map[s] = true;
        }
        else {
            if (s[0] != c) {
                cout << "WIN" << endl;
                return 0;
            }
            else c = s[s.length() - 1];
            if (Map[s]) {
                cout << "WIN" << endl;
                return 0;
            }
            else Map[s] = true;
        }
    }
    cout << "DRAW" << endl;
    return 0;
}
