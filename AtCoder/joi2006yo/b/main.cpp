#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <unordered_map>
using namespace std;
int main() {
    int n; cin >> n;
    unordered_map<char, char> Map;
    unordered_map<char, bool> change;
    for (int i = 0; i < n; i++) {
        char a, b; cin >> a >> b;
        Map[a] = b;
        change[a] = true;
    }
    cin >> n;
    string ans = "";
    for (int i = 0; i < n; i++) {
        char c; cin >> c;
        if (change[c]) ans += Map[c];
        else ans += c;
    }
    cout << ans << endl;
}
