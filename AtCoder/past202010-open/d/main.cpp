#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n; string s; cin >> n >> s;
    int x = 0, y = 0, z = 0;
    for (int i = 0; i < n; i++) if (s[i] == '#') {
        x = i;
        break;
    }
    for (int i = n - 1; i >= 0; i--) {
        if (s[i] == '#') {
            y = n - i - 1;
            break;
        }
    }
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (s[i] == '#' && s[j] == '#') {
                z = max(z, j - i - 1);
                break;
            }
        }
    }
    if (z == 0) cout << x << " " << y << endl;
    else if (x >= y) cout << x << " " <<  max(z - x, y) << endl;
    else cout << max(z - y, x) << " " << y << endl;
}
