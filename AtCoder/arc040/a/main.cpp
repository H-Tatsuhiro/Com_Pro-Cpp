#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n; cin >> n;
    int r = 0, b = 0;
    for (int i = 0; i < n * n; i++) {
        char c; cin >> c;
        if (c == 'R') r++;
        else if (c == 'B') b++;
    }
    if (r > b) cout << "TAKAHASHI" << endl;
    else if (r == b) cout << "DRAW" << endl;
    else cout << "AOKI" << endl;
}
