#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n, a, b; cin >> n >> a >> b;
    for (int i = 0; i < n; i++) {
        int c; cin >> c;
        if (a + b == c) cout << i + 1 << endl;
    }
}


