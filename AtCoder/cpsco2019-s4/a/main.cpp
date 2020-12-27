#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int l, x; cin >> l >> x;
    if ((x / l) % 2 == 0) cout << x % l << endl;
    else cout << l - x % l << endl;
}
