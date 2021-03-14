#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n; cin >> n;
    string ans = "";
    for (int i = 0; i < n; i++) {
        string a, b, c; cin >> a >> b >> c;
        if (a == "BEGINNING") ans += c[0];
        else if (a == "MIDDLE") ans += c[c.length() / 2];
        else ans += c[c.length() - 1];
    }
    cout << ans << endl;
}
