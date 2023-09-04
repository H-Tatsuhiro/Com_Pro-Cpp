#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n, h, x; cin >> n >> h >> x;
    for (int i = 0; i < n; i++) {
        int a; cin >> a;
        if (h + a >= x) {
            cout << i + 1 << endl;
            return 0;
        }
    }
}


