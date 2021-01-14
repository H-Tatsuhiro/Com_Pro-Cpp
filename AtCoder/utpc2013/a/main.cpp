#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <unordered_map>
using namespace std;
int main() {
    string s; cin >> s;
    unordered_map<char, int> Map;
    string z = "ADOPQRB";
    for (int i = 0; i < z.length(); i++) {
        if (i == z.length() - 1) Map[z[i]] = 2;
        else Map[z[i]] = 1;
    }
    vector<int> p = {0, 0, 1, 0};
    for (int i = 0; i < s.length(); i++) {
        if (Map[s[i]] != p[i]) {
            cout << "no" << endl;
            return 0;
        }
    }
    cout << "yes" << endl;
    return 0;
}
