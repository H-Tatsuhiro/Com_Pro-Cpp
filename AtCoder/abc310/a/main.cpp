#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n, p, q; cin >> n >> p >> q;
    for (int i = 0; i < n; i++) {
        int d; cin >> d;
        if (p > q + d) p = q + d;
    }
    cout << p << endl;
}


