#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n, x; cin >> n >> x;
    bool t = false;
    for (int i = 0; i < n; i++) {
        int a; cin >> a;
        if (a != x) {
            t = true;
            if (i == n - 1) cout << a << endl;
            else cout << a << " ";
        }
    }
    if (!t) cout << endl;
}
