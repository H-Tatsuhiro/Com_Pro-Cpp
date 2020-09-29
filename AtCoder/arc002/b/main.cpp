#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
bool judge(int y) {
    bool f = false;
    if (y % 4 == 0) f = true;
    if (y % 100 == 0) f = false;
    if (y % 400 == 0) f = true;
    return f;
}
int main() {
    int a, b, c; char d; cin >> a >> d >> b >> d >> c;
    vector<int> m = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (judge(a)) m[2] = 29;

    for (int k = c; k <= m[b]; k++) {
        if (a % (b * k) == 0) {
            if (b < 10) cout << a << '/' << 0 << b << '/';
            else cout << a << '/' << b << '/';
            if (k < 10) cout << 0 << k << endl;
            else cout << k << endl;
            return 0;
        }
    }

    for (int j = b + 1; j <= 12; j++) {
        for (int k = 1; k <= m[j]; k++) {
            if (a % (j * k) == 0) {
                if (j < 10) cout << a << '/' << 0 << j << '/';
                else cout << a << '/' << j << '/';
                if (k < 10) cout << 0 << k << endl;
                else cout << k << endl;
                return 0;
            }
        }
    }
    cout << a + 1 << "/01/01" << endl;
    return 0;
}
