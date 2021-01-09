#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n, x, y; cin >> n >> x >> y;
    vector<int> c(n, 0);
    for (int i = 0; i < n; i++) cin >> c[i];
    sort(c.begin(), c.end()); reverse(c.begin(), c.end());
    int a = x, b = y;
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) a += c[i];
        else b += c[i];
    }
    if (a > b) cout << "Takahashi" << endl;
    else if (a < b) cout << "Aoki" << endl;
    else cout << "Draw" << endl;
}
