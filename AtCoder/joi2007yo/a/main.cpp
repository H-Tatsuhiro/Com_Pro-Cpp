#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int a = 0, b = 0;
    for (int i = 0; i < 4; i++) {
        int c; cin >> c; a += c;
    }
    for (int i = 0; i < 4; i++) {
        int c; cin >> c; b += c;
    }
    if (a == b) cout << a << endl;
    else cout << max(a, b) << endl;
}
