#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    string s, t; cin >> s >> t;
    int cnt = 0, n = s.length();
    s += s;
    for (int i = n; i >= 0; i--) {
        string str = s.substr(i, n);
        if (str == t) {
            cout << cnt << endl;
            return 0;
        }
        cnt++;
    }
    cout << -1 << endl;
    return 0;
}
