#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <unordered_map>
using namespace std;
int main() {
    string s, t; cin >> s >> t;
    unordered_map<char, int> MapS, MapT;
    for (int i = 0; i < s.length(); i++) MapS[s[i]]++;
    for (int i = 0; i < t.length(); i++) MapT[t[i]]++;
    for (char c = 'a'; c <= 'z'; c++) {
        if (MapS[c] < MapT[c] && MapS['@'] >= MapT[c] - MapS[c] && (c == 'a' || c == 't' || c == 'c' || c == 'o' || c == 'd' || c == 'e' || c == 'r')) MapS['@'] -= MapT[c] - MapS[c], MapS[c] = MapT[c];
        if (MapT[c] < MapS[c] && MapT['@'] >= MapS[c] - MapT[c] && (c == 'a' || c == 't' || c == 'c' || c == 'o' || c == 'd' || c == 'e' || c == 'r')) MapT['@'] -= MapS[c] - MapT[c], MapT[c] = MapS[c];
    }
    bool f = true;
    for (char c = 'a'; c <= 'z'; c++) if (MapS[c] != MapT[c]) f = false;
    cout << (f ? "Yes" : "No") << endl;
}


