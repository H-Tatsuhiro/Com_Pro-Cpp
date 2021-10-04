#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    string a, b, c, t, ans; cin >> a >> b >> c >> t;
    for (int i = 0; i < t.length(); i++) {
        if (t[i] == '1') ans += a;
        else if (t[i] == '2') ans += b;
        else ans += c;
    }
    cout << ans << endl;
}
