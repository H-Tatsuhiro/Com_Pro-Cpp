#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int a, b, n; cin >> a >> b >> n;
    for (int i = 1; i < 10e8; i++) {
        if (i % a == 0 && i % b == 0 && i >= n) {
            printf("%d\n", i);
            return 0;
        }
    }
}
