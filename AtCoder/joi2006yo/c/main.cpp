#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n, sum = 1, tmp = 0, a = 1, b = 6, c = 5, d = 3, e = 2, f = 4; cin >> n;
    for (int j = 0; j < n; j++) {
        string s; cin >> s;
        if (s[0] == 'N') tmp = a, a = e, e = b, b = c, c = tmp;
        if (s[0] == 'W') tmp = a, a = d, d = b, b = f, f = tmp;
        if (s[0] == 'S') tmp = a, a = c, c = b, b = e, e = tmp;
        if (s[0] == 'E') tmp = a, a = f, f = b, b = d, d = tmp;
        if (s[0] == 'R') tmp = c, c = f, f = e, e = d, d = tmp;
        if (s[0] == 'L') tmp = c, c = d, d = e, e = f, f = tmp;
        sum += a;
    }
    cout << sum << endl;
}
