#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n; cin >> n;
    cout << 1;
    for (int i = 0; i < n; i++) {
        if (i != n - 1) cout << 0;
        else cout << 7 << endl;
    }
}
