#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n, m, a, b; cin >> n >> m >> a >> b;
    for (int i = 0; i < m; i++) {
        if (n <= a) n += b;
        int d; cin >> d;
        n -= d;
        if (n <= -1) {
            cout << i + 1 << endl;
            return 0;
        }
    }
    cout << "complete" << endl;
    return 0;
}

