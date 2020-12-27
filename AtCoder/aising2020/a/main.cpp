#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int l, r, d; cin >> l >> r >> d;
    int sum = (r / d) - ((l - 1) / d);
    cout << sum << endl;
}
