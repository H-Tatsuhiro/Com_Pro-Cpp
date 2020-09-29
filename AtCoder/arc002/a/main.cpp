#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int y; cin >> y;
    bool f = false;
    if (y % 4 == 0) f = true;
    if (y % 100 == 0) f = false;
    if (y % 400 == 0) f = true;
    if (f) cout << "YES" << endl;
    else cout << "NO" << endl;
}
