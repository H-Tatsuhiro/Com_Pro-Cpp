#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int x, y; cin >> x >> y;
    if (x - y < -2 || x - y > 3) cout << "No" << endl;
    else cout << "Yes" << endl;
}


