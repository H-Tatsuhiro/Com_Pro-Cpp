#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <unordered_map>
using namespace std;
int main() {
    int n; string s; cin >> n >> s;
    unordered_map<string, bool> Map;
    int x = 0, y = 0;
    Map["0_0"] = true;
    for (int i = 0; i < n; i++) {
        if (s[i] == 'L') {
            x--;
        }
        else if (s[i] == 'R') {
            x++;
        }
        else if (s[i] == 'U') {
            y++;
        }
        else {
            y--;
        }
        string t = to_string(x) + '_' + to_string(y);
        if (Map[t]) {
            cout << "Yes" << endl;
            return 0;
        }
        else Map[t] = true;
    }
    cout << "No" << endl;
    return 0;
}


