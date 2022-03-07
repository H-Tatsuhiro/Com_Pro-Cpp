#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n; cin >> n;
    vector<string> v(n, "");
    for (int i = 0; i < n; i++) cin >> v[i];
    int x = 0, y = 0, a = 1, b = 1;
    for (int i = 1; i < n; i++) {
        for (int j = 0; j < n; j++) if (v[i][j] == 'X') x += a;
        a++;
    }
    for (int i = n - 2; i >= 0; i--) {
        for (int j = 0; j < n; j++) if (v[i][j] == 'Y') y += b;
        b++;
    }
    if (x > y) cout << 'X' << endl;
    else if (x < y) cout << 'Y' << endl;
    else cout << "Impossible" << endl;
}
