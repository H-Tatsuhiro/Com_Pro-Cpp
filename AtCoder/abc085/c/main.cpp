#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n, y; cin >> n >> y;
    for (int i = 0; i <= n; i++) {
        int x = i * 1000;
        for (int j = 0; j <= n - i; j++) {
            int w = j * 5000, p = n - (i + j), z = p * 10000;
            int sum = x + w + z;
            if (sum == y) {
                cout << p << " " << j << " " << i << endl;
                return 0;
            }
        }
    }
    cout << "-1 -1 -1" << endl;
    return 0;
}
