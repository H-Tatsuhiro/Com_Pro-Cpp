#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n, m; cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        if (i != m) {
            cout << i << endl;
            break;
        }
    }
}
