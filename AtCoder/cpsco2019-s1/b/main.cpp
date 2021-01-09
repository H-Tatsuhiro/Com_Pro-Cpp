#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <unordered_map>
using namespace std;
int main() {
    string s; cin >> s;
    unordered_map<char, int> Map;
    char a = s[0];
    for (int i = 0; i < s.length(); i++) Map[s[i]]++;
    for (int i = 0; i < s.length(); i++) {
        if (Map[a] != Map[s[i]]) {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;
}
