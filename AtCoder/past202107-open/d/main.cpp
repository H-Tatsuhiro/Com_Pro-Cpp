#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n; string s; cin >> n >> s;
    string a = s, b = s;
    int x = 0, y = 0;
    for (int i = 0; i < n - 2; i++) {
        if (a[i] == 'a' || a[i] == 'i' || a[i] == 'u' || a[i] == 'e' || a[i] == 'o') {
            if (a[i + 1] == 'x' && a[i + 2] == a[i]) {
                x++;
                a[i] = '.', a[i + 1] = '.', a[i + 2] = '.';
            }
        }
    }
    for (int i = n - 1; i >= 2; i--) {
        if (b[i] == 'a' || b[i] == 'i' || b[i] == 'u' || b[i] == 'e' || b[i] == 'o') {
            if (b[i - 1] == 'x' && b[i - 2] == b[i]) {
                y++;
                b[i] = '.', b[i - 1] = '.', b[i - 2] = '.';
            }
        }
    }
    if (x >= y) cout << a << endl;
    else cout << b << endl;
}
