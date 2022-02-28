#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n; string s; cin >> n >> s;
    string ans = "";
    for (int i = 0; i < n; i++) {
        if (s[i] == 'B' && s[i + 1] == 'A') ans.push_back('A'), s[i + 1] = 'B';
        else if (s[i] == 'B' && s[i + 1] == 'B') s[i + 1] = 'A';
        else ans.push_back(s[i]);
    }
    cout << ans << endl;
}
