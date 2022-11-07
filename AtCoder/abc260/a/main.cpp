#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <unordered_map>
using namespace std;
int main() {
    string s; cin >> s;
    unordered_map<char, int> Map;
    for (int i = 0; i < 3; i++) Map[s[i]]++;
    for (char c = 'a'; c <= 'z'; c++) {
        if (Map[c] == 1) {
            cout << c << endl;
            return 0;
        }
    }
    cout << -1 << endl;
}
