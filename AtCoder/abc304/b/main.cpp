#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n, m = 1000; cin >> n;
    for (int i = 0; i < 7; i++) {
        if (n <= m - 1) {
            cout << n - n % (m / 1000) << endl;
            return 0;
        }
        m *= 10;
    }
}


