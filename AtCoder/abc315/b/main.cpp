#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int m; cin >> m;
    vector<int> d(m, 0);
    int s = 0, c = 0;
    for (int i = 0; i < m; i++) cin >> d[i], s += d[i];
    s /= 2, s++;
    for (int i = 0; i < m; i++) {
        c += d[i];
        if (c >= s) {
            cout << i + 1 << ' ' << s - (c - d[i]) << endl;
            return 0;
        }
    }
}