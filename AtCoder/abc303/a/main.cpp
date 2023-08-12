#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n; string s, t; cin >> n >> s >> t;
    bool f = true;
    for (int i = 0; i < n; i++) if (s[i] != t[i] && !((s[i] == '1' && t[i] == 'l') || (s[i] == 'l' && t[i] == '1') || (s[i] == '0' && t[i] == 'o') || (s[i] == 'o' || t[i] == '0'))) f = false;
    cout << (f ? "Yes" : "No") << endl;
}


