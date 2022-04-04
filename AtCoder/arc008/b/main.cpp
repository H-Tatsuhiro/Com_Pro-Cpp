#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n, m;
    string s, t; cin >> n >> m >> s >> t;
    vector x(26, 0), y(26, 0);
    for (char tc: t) y[tc - 'A']++;
    for (char sc: s) x[sc - 'A']++;
    m = 0;
    for (int i = 0; i < 26; i++) {
        if (y[i] == 0 && x[i] > 0) {
            cout << -1 << endl;
            return 0;
        }
        else if (y[i] == 0) continue;
        if (x[i] % y[i] == 0) m = max(m, x[i] / y[i]);
        else m = max(m, x[i] / y[i] + 1);
    }
    cout << m << endl;
    return 0;
}