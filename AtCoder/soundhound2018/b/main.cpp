#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n, l, r; cin >> n >> l >> r;
    for (int i = 0; i < n; i++) {
        int a; cin >> a;
        if (a < l) a = l;
        else if (r < a) a = r;
        if (i == n - 1) cout << a << endl;
        else cout << a << " ";
    }
}
