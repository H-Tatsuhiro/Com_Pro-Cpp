#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n, k; cin >> n >> k;
    for (int i = 0; i < k; i++) {
        int a, b; cin >> a >> b;
        int m = min(a - 1, min(n - a, min(b - 1, n - b))) % 3;
        if (m == 0) cout << 1 << endl;
        else if (m == 1) cout << 2 << endl;
        else cout << 3 << endl;
    }
}
